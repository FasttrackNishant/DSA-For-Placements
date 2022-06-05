#include <iostream>
using namespace std;
int main()
{
    int start,diff,end,celcius;
    cin>>start>>end>>diff;
    int i =start;
    while(i<=end)
    {
        celcius = ((i -32)*5)/9;
        cout<< i <<" "<<celcius<<endl;
        i = i+ diff;

    }
    return 0;
}