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

    /* vector<int> vect;
     vect.emplace_back(1);
     vect.emplace_back(4);
     vect.emplace_back(10);
     vect.emplace_back(15);

     vector<int> vect1(vect.begin(), vect.begin() + 2); // {1,4 }
     //this includes starting and excludes last element

 */
    // lower bound , upper bound

    // swap(vec1, vec2); //it swaps the vectors

    //  --> to defining 2d vectors

    vector<vector<int>> dvec;
    // vector ke andar vector

    vector<int> ram1;
    ram1.push_back(1);
    ram1.push_back(2);
    ram1.push_back(20);

    vector<int> ram2;
    ram2.push_back(10);
    ram2.push_back(20);

    vector<int> ram3;
    ram3.push_back(19);
    ram3.push_back(20);
    ram3.push_back(21);

    dvec.push_back(ram1);
    dvec.push_back(ram2);
    dvec.push_back(ram3);

    // cout<<dvec[0][2];  //accessing vector like this index starts 0

    // to print 2d vector

    //     for (auto vctr : dvec)
    //     {
    //         for (auto it : vctr)
    //         {
    //             cout << it << " ";
    //         }
    //         cout << endl;
    //     }

    // for (int i = 0; i < dvec.size(); i++)
    // {
    //     for (int j = 0; j < dvec[i].size(); j++)
    //     {
    //         cout << dvec[i][j] << " ";
    //     }
    //     cout << endl;
    // }



//   define 10 X 20 array 

vector< vector<int>> dvec(10, vector <int>(20,0));


// vector in array

vector <int> arr[10];

// empty vector at each position in an array  , array and number of vector is not dynamic..but the size of vector in dynamic



// 3D Vector  10 X 20 X 30 

// vector <vector <vector <int> >> tdvec(10, vector<vector<int>> tdvec(20, vector <int>(30,0)));







    // for (auto it = vec1.begin(); it != vec1.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    return 0;
}