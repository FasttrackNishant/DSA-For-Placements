#include <bits/stdc++.h>
using namespace std;
int main()
{
//comparators

    int arr[];
    sort(arr,arr+n);  //-> this will sort whole array
    sort(arr, arr+n, comp);

    bool comp(int ele1,int ele2)
    {
        if(el1 <= ele2)
        {
            //i.e array is alreaddy sorted
            return true;
        }
        return flase;    
    
    }


    /*
    
    sort array in descending
    
    tip for comparators 
    always consider two elements  
    if element 1 is before element two always it return true
    if element is not t returns false  
    now sort only that two elements
    
    
    */

    
    
    return 0;
}