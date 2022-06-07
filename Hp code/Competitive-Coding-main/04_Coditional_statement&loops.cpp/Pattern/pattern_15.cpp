/*

D
CD
BCD
ABCD

*/

// A+ j-1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    i = n;
    while (i >=1)
    {
        j = i;
        while (j <= n)
        {
        char value = 'A' + j - 1;
            cout << value;
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}
