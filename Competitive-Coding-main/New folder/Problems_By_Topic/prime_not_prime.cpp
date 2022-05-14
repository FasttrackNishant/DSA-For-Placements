#include <iostream>
using namespace std;
int main ()
{
int n;
cin>>n;
int a=2;
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        break;
    }
    a++;

}
if(a==n)
{
    cout<<n<<"is prime number";
}
else{
    cout<<"not prime number";
}

return 0;
}