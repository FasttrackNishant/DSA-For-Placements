/*

AAA
BBB
CCC  

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    i = 1;
    
    
    while (i <= n)
    {
        j = 1;
 
        while (j <= n)
        {int val = 'A'+i-1 ;
            cout <<char(val);
            j++;
           
        }
       
        cout << endl;
        i++;
    }

    return 0;
}

