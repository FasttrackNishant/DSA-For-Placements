/*

****
***
**
*
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    i = 0;

    while (i < n)
    {
        j = n -i;

        while (j > 0)
        {
            cout << "*";
            j--;
        }
       
        cout << endl;
        i++;
    }

    return 0;
}
