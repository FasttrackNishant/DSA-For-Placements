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
    i = 1;

    while (i <= n)
    {
        j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

/