#include <bits/stdc++.h>
using namespace std;

// array<int, 5> arr; //-> all values zero

int main()
{

    // array<int, 5> arr;
    // one more method to represent array now this will take all garbage value if it is inside the main and if it is outside the main then the value will become zero by deafaulf

    // array<int, 5> arr2 = {1, 2, 3};
    // cout << arr2[4];
    // now in this case it will take all other elements as the FP_ZERO

    // array<int, 5> arr2 = {1};  //-> {1,0,0,0,0}

    // int arr3[100] ={1};
    // cout<<arr3[0];
    // it will only put 0 at index 1 and all other will be zero

    // array<int, 5> arr;
    // arr.fill(3); // -> {3,3,3,3,3}
    // it will fill all the elements at the three

    array<int, 5> arr = {1, 2, 3, 4, 5};
    // cout << arr.begin();
    // cout << arr.end();
    // for (auto it = arr.begin(); it != arr.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    //this two will traverse in reverse direction
    // for (auto it = arr.rbegin(); it != arr.rend(); it++) //it++ is right as it will increase and will go in reverse direction
    // {
    //     cout << *it << " ";
    // }
    // for (auto it = arr.end() - 1; it >= arr.begin(); it--)
    // {
    //     cout << *it << " ";
    // }

    // // for each loop --to print array as it is

    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }

    // // for string
    // string s = "dkfghfklg";
    // for (auto c : s)
    // {
    //     cout << c;
    // }

    // cout << arr.size(); 
    // cout << arr.front();  //arr.at(0)
    // cout << arr.back();   // arr.at(arr.size()-1)

    return 0;
}