/* https://codeforces.com/problemset/problem/282/A */
#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string k[n];
    int val=0;
    for (int j = 0; j < n; j++)
    {
        cin>>k[j];
    }
    
    for(int i=0;i<n;i++)
    {
        if(k[i]=="x++")
        {
            val++;
        }
        else if(k[i]=="++x")
        {
            ++val;
        }
        else if(k[i]=="x--")
        {
            val--;
        }
        else if(k[i]=="--x")
        {
            --val;
        }
    }
    cout<<val<<endl;


}