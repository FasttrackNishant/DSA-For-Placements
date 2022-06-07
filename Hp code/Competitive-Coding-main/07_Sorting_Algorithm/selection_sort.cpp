#include <bits/stdc++.h>
using namespace std;

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}

int selectionsort(int arr[], int size, int index )
{
for (int i = index; i < size-1; i++)
{
    int minindex = i;
    for (int j = i+1; j < size; j++)
    {
        if(arr[j] < arr[minindex])
        {
            minindex = j;
        }
    }
    swap(arr[minindex], arr[i]);  
}
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{

int arr[]={9,4,6,2,1};
int size = sizeof(arr)/4;
int index;
cin>>index;
selectionsort( arr , size ,index );
printarr(arr,size);

    return 0;
}