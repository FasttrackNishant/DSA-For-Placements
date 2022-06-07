/*

123
456
789

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, count;
    i = 1;
    j = 1;
    count = 1;
    while (i <= n)
    {
        /*j =1 is very imp to this location */
        j = 1;

        while (j <= n)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

/*here if we put j =  1 outside the scope then it incremens n but not the j and second while condition is false and it exits the loop ...and if we place j=1 above the second loop then it makes j to again 1 and second row starts and again print second row and hence shanti  */