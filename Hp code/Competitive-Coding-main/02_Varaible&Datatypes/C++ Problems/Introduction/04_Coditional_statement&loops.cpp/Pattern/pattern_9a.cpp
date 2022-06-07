/*

1
23
345
4567

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    i = 0;

    while (i <= n)
    {
        j = 0;
        while (j <= i)
        {
            cout << i + j + 1;

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

/* yaha pe i and j ki condition or woh formul a i+j+1 imp  hai.
aur conditon dono same chhahiye...think more 
*/