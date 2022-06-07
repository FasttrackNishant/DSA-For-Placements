#include <bits/stdc++.h>
using namespace std;
int main()
{
    // LIFO data structure
    stack<int> st;

    // pop , top , size , empty , push || emplace

    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);

    /*
    1
    3
    4
    2
         in this way they are stored in stack
    */
    cout << st.top(); // prints last element
    st.pop();         // deletes the last entered element
    cout << st.top();
    st.pop();
    cout << st.top();

    cout << st.size();

    // it has no clear function
    // to empty whole stack

    bool flag = st.empty(); // return true if stack is empty or false

    // deleted the entire stack
    while (!st.empty())
    {
        st.pop();
    }
    cout << st.size();

    stack<int> sta;
    sta.top(); //it will give an error as it is not filled

    //corrected

    while (!sta.empty())
    {
        cout<<sta.top();
    }
    



    return 0;
}
