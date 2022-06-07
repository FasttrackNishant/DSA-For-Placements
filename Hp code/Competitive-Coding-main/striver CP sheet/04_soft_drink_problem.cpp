/* https://codeforces.com/problemset/problem/151/A */

#include<bits/stdc++.h>
using namespace std;
int find_min(int a, int b, int c)
{
    if(a<b)
    {
        b=a;
    }
    if(b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k *l;
    total_drink= total_drink/(nl);
    int total_slices = c*d;
    int total_salt = p/np;
    int result =find_min(total_drink,total_slices,total_salt);
    result= result/n;
    cout<<result;
}