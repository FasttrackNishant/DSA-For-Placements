#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // this stl only works on the sorted array

    /*
    arr[] -> {1,5,7,9,10}
    x= 9;
    */

    // syntax
    // binary_search(firstiterator,lastiterator,x)
    // this returns true or false
    // works in log(n)

    bool res = binary_search(arr, arr + n, 8);

    // cout << res;


    /*
    ~~~~~~~~~~~~~~~~~~~~~~~~
    lower bound function
    return an iterator  pointing to the first element which is not less than x

    arr[] -> {1,5,7,7,8,10,10,10,11,11,12}
    x -> 10

    iterator will point towars the 10 itself as it is first element which is not less that 10

    x=6 -> 7
    x=13 -> to the end iterator


    this works  in log N
    */

    //auto it = lower_bound(arr, arr + n, 6);
   // int ind = it - arr;

    /*
        vector<int> vec;
        auto it = lower_bound(vec.begin(), vec.end(), x);

    cout << it-vec.begin(); //->it will give index


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/



/*
~~~~~~~~~~~~~~~
Upper Bound -> t=it returns an iterator which points to an element which is just greater than x



arr[]  --> {1,5,7,7,8,10,10,101,11,11,12}

x = 7  -> points to 8
x = 6  -> pint to 7
x =12  --> point to end()
x =15  --> point to end()

*/


// auto it = upper_bound(arr, arr+n , 7);
// int idex = it-arr;
// cout<<idex;

vector <int> vec;
auto it = upper_bound(vec.begin(), vec.end(),x);
int ind = it - vec.begin();

//or

int ind = upper_bound(vec.begin(),vec.end(),x)- vec.begin();


/*

Q.1  Find me the index whrre the element x lies 
find functino can be used but it taked O(n) time 
the array is sorted 


*/
}
