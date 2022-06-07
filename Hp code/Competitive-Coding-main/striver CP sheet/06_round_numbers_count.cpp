/* https://codeforces.com/problemset/problem/1352/A */

#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t;
    cin>>t;
    int n;
    int count=0;
    int k=1;
    int arr[6]={0};
    vector <int> v;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    for(int m=0;m<t;m++)
    {
        n = v.at(m);
        for(int i=1;i<6;i++)
        {
            arr[i]=n%10;
            n=n/10;
            if(arr[i]!=0)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
        for(int j=1;j<6;j++)
        {
            if(arr[j]!=0)
            {
                cout<<arr[j]*k<<" ";
        
            }
            k=k*10;
        }
        cout<<endl;
        k=1;
    }
}



