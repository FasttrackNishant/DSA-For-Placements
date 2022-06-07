#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f =s[0]- '0';
    if(9-f<5 && 9-f!=0)
    {
        f=9-f;       
    }
    s[0]=f +'0';
    int k;
    for (int i = 1; i < s.size(); i++)
    {
        k= s[i]-'0';
        if(9-k<5)
        {
            k=9-k;
        }
        s[i]=k+'0';
    }
    
    cout<<s<<endl;
    return 0;
    
}