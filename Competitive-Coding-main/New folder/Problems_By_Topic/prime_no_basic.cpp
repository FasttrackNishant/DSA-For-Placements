#include <iostream>
using namespace std;

int main()
{
int n;
int i =2;
cin>>n;
while (i<n)
{
    if(n%i ==0)
    {
        cout<<"not Prime";
    }
    i++;
}



    return 0;
}