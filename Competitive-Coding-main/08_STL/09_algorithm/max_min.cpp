#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // to find the maximum element at the index
    // int i, j;
    // int maxi = INT_MIN;
    // for (int k = i; k <= n; k++)
    // {
    //     if (arr[k] > maxi)
    //     {
    //         maxi = arr[k];
    //     }
    //     cout << arr[k];
    // }

    int maxele = *max_element(arr, arr + n);
    //    cout << maxele;
    int minele = *min_element(arr, arr + n);
    //  cout << minele;

    // for vector user vector begin and end

    /*for sum if I want give the range and I want the sum from that range*/

    // int i, j, sum = 0;
    // for (int k = i; k <= j; k++)
    // {
    //     sum += arr[k];
    // }

    // accumulate (startiterator,enditerator,initialsum)
    int sum = accumulate(arr, arr + n, /*initial sum*/ 0);

    // cout << sum;

    // tell how many time element occurs in the array

    int x, cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cont++;
        }
    }

    // count(firstiterator,lastiterator,x)
    int cnt = count(arr, arr + n, 2);
    // cout<<cnt;
    // count(vec.beging(), vec.end(),1)

    // array find the first occurrence of 1
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            ind = i;
            break;
        }
    }

    
    // cout<<ind;

    auto it = find(arr, arr + n, 2);
    /*it will return an iterator pointing to first instance of it

    but the problem here is it will return an iterator not the index and to find the index we have to subtract it from the beging and then it will give an index
    */

    int ind = it - 0; /*or arr->this is the first iterator */

    vector<int> vec;
    auto it = find(vec.begin(), vec.end(), 2);
    int ind = it - vec.begin();

    /*in case element is not presetn it will go till vec.end() and if it goes till there then it means that element is not present*/

    if (it == vec.end())
    {
        cout << "element is not present";
    }
    else
    {
        cout << "element is present first at " << it - vec.begin();
    }
}