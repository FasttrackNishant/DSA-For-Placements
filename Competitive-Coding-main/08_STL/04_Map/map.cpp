#include <bits/stdc++.h>
using namespace std;
int main()
{
    // key value
    // raj -> 27
    // hima -->31
    // sandeep --> 67
    // tank --> 89

    map<string, int> mpp;
    mpp["raj"] = 27;
    mpp["hima"] = 31;
    mpp["sandeep"] = 67;
    mpp["tank"] = 89;

    mpp.emplace("raj", 45); // both are similar

    // erase
    // mpp.erase("raj"); // map.erase(key)
    // mpp.erase(mpp.begin(), mpp.end());
    // mpp.clear();
    // mpp.find("raj"); // first ocurrance of raj
    auto it1 = mpp.find("raj");
    auto it = mpp.find("simran");
    // points to an end since she doesn't exist

    // points to where raj lies

    // to check map is empty or not
    // if (mpp.empty())
    // {
    //     cout << "empty is map";
    // }
    // else
    // {
    //     cout<<"not empty";
    // }

    mpp.count("raj"); // it will always return 1

    // time complexity is log n

    // it will return pair of string and int
    pair<int, int> pr;
    pr.first = 1;
    pr.second = 2;

    // printing map
    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // it.first will become hime
    // it.second will become 31

    // for (auto it = mpp.begin(); it != mpp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // unordered map
    // all functions are repeated
    // doesn't stores in any order
    unordered_map<string, int> umap;

    // tc  O(1) in all cases
    //     O(n) in the worst cases,where n is container size

    // Pair class

    pair<int, int> pr1 = {1, 2};
    pair<pair<int, int>, int> pr2 = {{1, 2}, 2};

    cout << pr2.first.second << endl;

    pair<pair<int, int>, pair<int, int>> pr3 = {{1, 2}, {2, 4}};

    cout << pr3.first.second << endl;
    cout << pr3.second.second << endl;

    // it is not the container

    vector<pair<int, int>> vec;
    set<pair<int, int>> st;
    map<pair<int, int>, int> mpp;

    //pair of unodered map can not be defined 


//multi map 

multimap <string , int > mulmap;

mulmap.emplace ("raj",2);
mulmap.emplace ("raj",5);

//functions are same 


        return 0;
}