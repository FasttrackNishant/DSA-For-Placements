#include <bits/stdc++.h>
using namespace std;
int main()
{

    /* FIFO
       push
       front
       pop
       size
       empty

    */

    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(3);
    q.push(6);


    cout<<q.front(); // it will first in 
    q.pop();
    cout<<q.front(); 


    return 0;
}