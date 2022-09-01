#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  int t;
    cin>>t;
    int arr[t]={0};
    string temp[t];
    long long int ans[t]={0};
    int val=1;
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    {
        temp[i]= to_string(arr[i]);
        for(int j=0;j<temp[i].length()-1;j++)
        {
            val= val*10;
        }

        ans[i]=arr[i]-val;
        val = 1;
    }
    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}