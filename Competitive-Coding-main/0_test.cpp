#include <bits/stdc++.h>
using namespace std;
void reversearr(int arr[], int n)
{
    int s = 0;
    int e = n-1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int t;
    int n;
    // cin >> t;
     cin >> n;
    
    int arr[n];

    // while (t--)
    // {
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reversearr(arr, n);
    //    for (int i = 0; i < n; i++)
    //    {
    //        cout<<arr[i]<<" "<<endl;
    //    }

    return 0;
}