// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++);
            // printf("%d ", a[i]);
        // printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
int temp=arr[n-1];
    
    for(int i=n-1;i>=0;i--)
    {
    
    arr[i+1]=arr[i];
    cout<<arr[i+1]<<" ";
    
    }
    
    arr[0]=temp;

   
    
    
}