//https://practice.geeksforgeeks.org/problems/count-squares3649/1# { Driver Code Starts


//Expected Time Complexity: O(sqrt(N)) 

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        // code here
        int i=1;
        int count=0;
        while((i*i)<N)
        {
            count++;
            i++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends