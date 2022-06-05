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

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    reverse(arr, arr + n);
    // reverse(startiterator, enditerator) --> [)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    vector<int> vec;
    reverse(vec.begin(), vec.end());
    return 0;
}