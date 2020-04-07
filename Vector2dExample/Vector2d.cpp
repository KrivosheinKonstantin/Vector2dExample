#include "Vector2d.h"
#include <iostream>
#include <string>
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

Vector2d Vector2d::sum(Vector2d vector)
{
	x = x + vector.x;
	y = y + vector.y;
	return Vector2d(x, y);
}

Vector2d Vector2d::sub(Vector2d vector)
{
	x = x - vector.x;
	y = y - vector.y;
	return Vector2d(x, y);
}

Vector2d Vector2d::mult(double n)
{
	x = x * n;
	y = y * n;
	return Vector2d(x, y);
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

Vector2d Vector2d::operator+(const Vector2d& vector) const
{
	return Vector2d(x + vector.x, y + vector.y);
}

Vector2d Vector2d::operator-(const Vector2d& vector) const
{
	return Vector2d(x - vector.x, y - vector.y);
}

double Vector2d::operator*(const Vector2d& vector) const
{
	return (x * vector.x + y * vector.y);
}

Vector2d Vector2d::operator*(double n) const
{
	return Vector2d(x * n, y * n);
}

Vector2d operator*(double n, Vector2d& vector)
{
	return vector * n;
}

Vector2d Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

const Vector2d& Vector2d::operator+=(const Vector2d& vector)
{
	x += vector.x;
	y += vector.y;
	return *this;
}

const Vector2d& Vector2d::operator-=(const Vector2d& vector)
{
	x -= vector.x;
	y -= vector.y;
	return *this;
}

const Vector2d& Vector2d::operator*=(const Vector2d& vector)
{
	x *= vector.x;
	y *= vector.y;
	return *this;
}

Vector2d::operator std::string()
{
	string s = "(" + to_string(x) + "," + to_string(y) + ")";
	return s;
}