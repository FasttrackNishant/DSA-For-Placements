/*

       1
      121
     12321
    1234321
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;

    for (int i = 0; i <= n; i++)
    {

        // space

        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        // middle triangle

        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }

        // last traingle

        for (int j = 1; j <= i; j++)
        {
            int value = i;
            if (i == 1)
            {
               cout<<endl;
            }
            else
            {
                cout << value;
                value--;
            }
        }
        cout << endl;
    }

    return 0;
}
