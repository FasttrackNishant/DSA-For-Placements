#include <iostream>
#include <string>
using namespace std;

int firstUniqChar(string s)
{
    int cnt = 1;
    int start = 0;
    int j = 1;
    int i = 0;
    for (; i < s.length(); i++)
    {
        for (; j < s.length(); j++)
        {

            cout << s.at(i) << " " << s.at(j) << endl;
            // if (s.at(i) != s.at(j))
            // {
            //     continue;
            // }
            // else
            // {
            //     break;
            // }
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    cout << firstUniqChar(str);

    return 0;
}