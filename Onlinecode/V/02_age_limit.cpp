#include <iostream>
using namespace std;

int main()
{

    int X, Y, A, t;

    cin >> t;
    while (t--)
    {
        cin >> X >> Y >> A;

        if (A >= X && A < Y)
        {
            cout << "yes"<<endl;
        }
        else
        {
            cout << "no"<<endl;
        }
    }
    return 0;
}