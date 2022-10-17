//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
// swaptwo() ; to swap two values (a, b) to (b, a)
void swap(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}

void swap(int &a, int &b, int &c)
{
    swap(a, b);
    swap(a, c);

}

void swap(int &a, int &b, int &c, int &d)
{
    swap(a, b);
    swap(b, c);
    swap(c, d);

}

// Get inputs
void getinput(int& num)
{
    cout << "Enter value: ";
    cin >> num;
}
void getinput(int& n1, int& n2)
{
    cout << "Enter two values: ";
    cin >> n1 >> n2;
}
void getinput(int& n1, int& n2, int& n3)
{
    cout << "Enter three values: ";
    cin >> n1 >> n2 >> n3;
}
void getinput(int& n1, int& n2, int& n3, int& n4)
{
    cout << "Enter four values: ";
    cin >> n1 >> n2 >> n3 >> n4;
}
