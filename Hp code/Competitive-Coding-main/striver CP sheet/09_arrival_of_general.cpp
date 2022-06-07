#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max ,min,k,l;
    k=l=0;
    int result=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    max=min=arr[1];
    for(int i=1;i<=n;i++)
    {
       if(arr[i]>max)
       {
           max=arr[i];
           k=i;
       }
       if(arr[i]<=min)
       {
           min=arr[i];
           l=i;
       }
    }
    if(k>=l)
    {
        cout<<abs(k-1)+abs(n-l)-1;
    }
    else
    {
        cout<<abs(k-1)+abs(n-l);
    }
    return 0;
}