/*

ABC
ABC
ABC
*/

// A+ j-1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    i = 0;
    int value = 'A';
    
    while (i <= n)
    {
        j = 0;
        value = 'A';
        
        while (j <= n)
        {
            cout << char(value);
            j++;
        value++;
           
        }
        cout << endl;
        i++;
    }

    return 0;
}

