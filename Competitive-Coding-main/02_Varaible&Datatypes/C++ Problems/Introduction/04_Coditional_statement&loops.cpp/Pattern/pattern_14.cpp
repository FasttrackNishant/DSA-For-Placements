/*

ABC
BCD
CDE
*/

/*
i +j -1 = A

ADD A-1

i+j-1 +A -1  =A+A-1

A+I+ J- 2 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    i = 1;
    int value = 'A';

    while (i <= n)
    {
        j = 1;
        

        while (j <= i)
        {
           value = 'A' +i+j-2;
            cout << char(value);
            j++;
            value++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
