#include <iostream>
#include "Vector2d.h"
#include <string>

using namespace std;
int main()
{
    Vector2d A(1, 5);
    Vector2d B(2, 3);

    A.print();
    B.print();
    
    /*A -= B;
    A.print();
    A += B;
    A.print();
    A *= B;
    A.print();*/
    
    /*Vector2d C = A + B;
    C.print();*/

    //cout << string(A+B);
    /*A--;*/
    A += B;
    
    cout << string(A);
}


