#include <iostream>
using namespace std;

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Before swap values are " << a << b << endl;
    swap(&a, &b);
    cout << "After swap values are " << a << b << endl;
    return 0;
}
