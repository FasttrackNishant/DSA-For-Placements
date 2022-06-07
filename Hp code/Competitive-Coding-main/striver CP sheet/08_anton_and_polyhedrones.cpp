/* https://codeforces.com/problemset/problem/785/A */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    string s;
    while(n>0)
    {
        cin>>s;
        if(s[0]=='T')
        {
            count = count +4 ;
        }
        else if(s[0]=='C')
        {
            count = count +6 ;
        }
        else if(s[0]=='O')
        {
            count = count +8 ;
        }
        else if(s[0]=='D')
        {
            count = count + 12;
        }
        else if(s[0]=='I')
        {
            count = count + 20;
        }
        n--;
    }
    cout<<count<<endl;
}