#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;

    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(8);
    vec.push_back(10);

    cout << vec.size();
    vec.pop_back();
    cout << vec.size();
    

    // for(auto it : vec)
    // {
    //     cout<<it<<" ";
    // }
    return 0;
}