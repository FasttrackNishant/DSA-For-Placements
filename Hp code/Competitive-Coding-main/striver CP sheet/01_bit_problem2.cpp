/* https://codeforces.com/problemset/problem/282/A */
#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int val=0;
    string s;
    for (int j = 0; j < n; j++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            ++val;
        }
        if(s[1]=='-')
        {
            --val;
        }
    }
    cout<<val<<endl;
    return 0;
}