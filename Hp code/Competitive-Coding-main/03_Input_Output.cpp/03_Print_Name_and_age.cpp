#include <iostream>
using namespace std;
int main()
{
    string s;
    int age;
    getline(cin, s);
    cin >> age;
    cout<<"The name of the person is "<<s<<" and the age is "<<age<<endl;
    // printf("The name of the person is %s and the age is %d", s, age);
    return 0;
}