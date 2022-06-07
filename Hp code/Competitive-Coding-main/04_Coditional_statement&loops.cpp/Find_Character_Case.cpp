#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (int('A')<= ch &&  ch<= int('Z'))
    {
        cout << "1";
    }
    else if (int('a')<= ch &&  ch<= int('z'))
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}