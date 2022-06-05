/*
 *
 **
 ***
 ****
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {

        for (int j = 0; j <= i; j++) // j< i+1
        {
           cout<<"*";
        }
        cout<<endl;
        
    }
    
    cout << endl;
    return 0;
}