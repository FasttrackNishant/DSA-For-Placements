#include <iostream>
using namespace std;
int main()
{
    int arr[]={32,2,2,5,2,54,3};
    // cout <<arr[2]<< endl;

    int arr2[5];

    //used to find elements count in the array

    // cout<<sizeof(arr)/4<<endl;





   for (int i = 0; i <5 ; i++)
   {
      cin>>arr[i];
   }
  
 for (const int &n : arr)
 {
     cout<< n;
 }
    //   for (int j = 0; j <5; j++)
    //   {
    //       cout<<arr[j];
    //   }

      return 0;
}