#include <bits/stdc++.h>
using namespace std;
int main()
{

    int array[50]; // array demands for the size

    vector<int> arr; // empty vector -{}
    // the size of the vector is dynamically increasing
    // segmentation fault if you push_back 10^7

    // cout << arr.size() << endl; // --> 0
    // arr.push_back(0);           // {0}
    // arr.push_back(2);           // {0,2}
    // cout << arr.size() << endl; //--> 2
    // arr.pop_back();             // 1
    // cout << arr.size() << endl; //--> 2
    // arr.clear();                // it will clear all elements in the vec

    vector<int> vec(4, 0); // it will create vec with size 4 and ele 0 {0,0,0,0}

    vector<int> vec1(3, 1);
    vector<int> vec2(4, 3);

    // now to create vec3 which contaings all ele of vec2

    //--> to copy the vector

    // vector<int> vec3(vec2.begin(), vec2.end());
    // [) the begin will in vector not in not the vector

    // vector<int> vec3(vec2); // entirely copy this

    // only to take selected items in vec

    vector<int> vect;
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(1);

    vector<int> vect1(vect.begin(), vect.begin() + 2); // {1,4 }

    for (auto it = vect.begin(); it != vect.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}