#include <bits/stdc++.h>/
using namespace std;
int main()
{

    /*next permutation

    string = abc

     abc ,acb ,bac,bca,cab,cba


    it returns boolean variable

    its complexity is O(n)

    n! can have it
    */
    string s = "abc";

    bool res = next_permutation(s.begin(), s.end());
    // it will give true if the next permutatin occurs
    //  for cba it will return false

    // to print all the permutations
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // prev_permutation

    bool res = prev_permutation(s.begin(), s.end());

    return 0;
}