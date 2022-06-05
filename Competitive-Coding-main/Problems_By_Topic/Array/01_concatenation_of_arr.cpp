#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int a;
    cout << endl;
    vector <int> v;
    for(int i;i<1000;i++)
    {
        cin>>a;
        v.push_back(a);
        if(a==0){
            break;
        }
    }
    for(int  j=v.end();j<v.size();j++)
    {
        cin>> a;
        v.push_back(j);
    }
    for(auto it :v)
    {
        cout<<it<<endl;
    }
    return 0;
}