#include "Vector2d.h"
#include <iostream>
using namespace std;

Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	this->y = y; // (*this).y = y;
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2)
{
	this->x = x2 - x1;
	this->y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& vector)
{
	this->x = vector.x;
	this->y = vector.y;
}

Vector2d::~Vector2d() {};

void Vector2d::sum(Vector2d vector)
{
	x = x + vector.x;
	y = y + vector.y;
}

void Vector2d::sub(Vector2d vector)
{
	x = x - vector.x;
	y = y - vector.y;
}

void Vector2d::mult(double n)
{
	x = x * n;
	y = y * n;
}

double Vector2d::scalarMult(Vector2d vector)
{
	x = x * vector.x;
	y = y * vector.y;
	return x + y;
}

double Vector2d::length()
{
	return sqrt(x * x + y * y);
}

double Vector2d::angle(Vector2d vector)
{
	return acos(scalarMult(vector) / (length() * vector.length()));
}

double Vector2d::tg(Vector2d vector)
{
	return tan(angle(vector));
}

void Vector2d::print()
{
	cout << "Vector(" << x << ";" << y << ")" << endl;
}

