#include <bits/stdc++.h>
using namespace std;
int main()
{

    // print unique elements in an array

    int arr[] = {2, 5, 2, 1, 5};
    // unique ele --> {4,6} for that set helps

    set<int> st = {1, 2, 4, 5, 1, 2}; // double , int , char

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.insert(x);
    // }

    // now st is st -> {1,2,5}
    // erase functionality

    // st.erase(st.begin()); // st -> {2,5}

    // st.erase(st.begin(), st.begin()+2); //--> {5}
    // st.erase(startiterator , enditerator)

    // erase using key
    // st.erase(5);  //delete particular element

    // erase entire set
    // st.erase(st.begin(), st.end());

    set<int> st1 = {5, 6, 7, 8};
    set<int> st2(st1.begin(), st1.end());

    //    auto it = st1.find(5); //log n // it will be iterator to 5

    //    auto it = st1.find(60);  // it = st.end( )

    // cout << st.size();

unordered_set <int> stu;
// avg time complexity is O(1)


multiset <int> ms;

ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(2);
ms.insert(3);
// it gives option to store all the elements not unique but in the sorted fashion 
// ms -> {1,1,2,2,3}

// ms.erase(2);
auto it1 = ms.find(3);

// ms.clear(); //deltes the entire set
ms.erase(ms.begin() , ms.end());

ms.erase(ms.find(3));


//to find how many times an instance occurs

ms.count(2);

// log n in size 


 



    // printting  the set
    // for (auto it = st1.begin(); it != st1.end(); ++it)
    // {
    //     cout << ' ' << *it;
    // }

    for (auto it : ms)
    {
        cout << it << " ";
    }
    return 0;
}