#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int x, y, z;
    while (t > 0)
    {
    cin >> x >> y >> z;
        if (z % x == 0 && z % y == 0)
        {
            cout << "ANY";
        }
        else if (z % y == 0)
        {
            cout << "DUCK";
        }
        else if (z % x == 0)
        {
            cout << "CHICKEN";
        }
        else
        {
            cout << "NONE";
        }
        cout << endl;
        t--;
    }

    return 0;
}