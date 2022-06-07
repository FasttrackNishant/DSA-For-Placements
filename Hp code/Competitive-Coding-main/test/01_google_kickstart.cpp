#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    // string ste[t];
    // for(int i=0;i<t;i++)
    // {
    //     cin>>ste[i];
    // }
    while(t>0)
    {
        int n;
    cin>>n;
    string s;
    int ue,le,digi,sc;
    ue=le=digi=sc=0;
    vector <char> vec;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        vec.push_back(s[i]);
        if(s[i]>=65 && s[i]<=90)
        {
            ue++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            le++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            digi++;
        }
        else if(s[i]=='#' || s[i]=='@'||s[i]=='*'|| s[i]=='&')
        {
            sc++;
        }
    }
  
    for(int i=0;i<n;i++)
    {
        if(ue<1)
        {
            vec.push_back('A');
            ue++;
        }
        if(le<1)
        {
            vec.push_back('a');
            le++;
        }
        if(digi<1)
        {
            vec.push_back('1');
            digi++;
        }
        if(sc<1)
        {
            vec.push_back('&');
            sc++;
        }
    }
    for (auto it : vec)
    {
        cout << it ;
    }
        t--;
}
    return 0;
}