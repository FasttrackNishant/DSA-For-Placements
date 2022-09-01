#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    int u[n];
    int a[k];
    int b[k];
    for(int j=0;j<2;j++)
    {
       cin>>n>>k;
       for(int i=0;i<n;i++)
       {
           cin>>u[i];
       }
       for(int z=0;z<k;z++)
       {
           cin>>a[z]>>b[z];
       }
    }
    return 0;
}