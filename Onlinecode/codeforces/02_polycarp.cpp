#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s[t];
    set<char> str;
    string temp;
    char ch;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < t; i++)
    {
        temp = s[i];
        for (int j = 0; j < temp.length(); j++)
        {
            if (str.size() == 3)
            {
                count++;
                str.erase(str.begin(), str.end());
            }
            str.insert(temp[j]);
        }

        if (str.size() != 0)
        {
            count++;
        }
        str.erase(str.begin(), str.end());
    }
    cout << count<<endl;
    count =0;
}