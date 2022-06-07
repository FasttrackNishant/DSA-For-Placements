/* https://codeforces.com/problemset/problem/723/A */

#include<bits/stdc++.h>
using namespace std;
int maxa(int a,int b)
{
    if(a>b)
      return a;
    else
      return b;
}
int mini(int a,int b)
{
    if(a>b)
      return b;
    else
      return a;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x1,x2,x3;
    x1 = maxa(a,maxa(b,c));
    x3 = mini(a,mini(b,c));
    cout<<x1-x3;

}