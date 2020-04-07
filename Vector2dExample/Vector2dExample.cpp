#include <iostream>
#include "Vector2d.h"

using namespace std;
int main()
{
    Vector2d A(4, 3, 7, 2);
    Vector2d B(1, 3);

    /*A.print();
    B.print();
    A.sum(B);
    A.print();
    B.mult(2);
    B.print();
    A.scalarMult(B);
    A.print();*/

   /* A.print();
    B.print();
    cout << A.angle(B) << endl;
    cout << A.tg(B) << endl;
    cout << B.length() << endl;*/

    A.print();
    B.print();
    A.mult(3);
    A.print();
}


