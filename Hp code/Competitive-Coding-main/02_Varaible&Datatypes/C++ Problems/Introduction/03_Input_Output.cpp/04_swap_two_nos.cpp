#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 8;

    cout << "a is " << a << "b is " << b << endl;
    b = a + b;
    a = b - a;
    b = b - a;
    cout << "a is " << a << "b is " << b << endl;

    return 0;
}