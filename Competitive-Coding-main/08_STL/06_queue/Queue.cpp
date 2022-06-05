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


all this operations are o(1)
    */

    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(3);
    q.push(6); // it will insert element

    // cout << q.front(); // it will print first in

    q.pop(); // it will remove element

    // there is no clear function
    // no iterator concept in stack_queue

    while (!q.empty())
    {
        q.pop();
    }

    // cout << q.size();

    priority_queue<int> pq;
    /*push , size , top ,pop , empty
    6
    5
    2
    1
     it keeps the maximum element at the top
     stores in ascending order
    */

    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);

    // cout << pq.top(); // 6
    // pq.pop();
    // cout << pq.top(); // 5

    // pairs

    priority_queue<pair<int, int>> pqp;

    // pqp.push(1, 5);
    // pqp.push(1, 6);
    // pqp.push(1, 7);

    // (1,7) -> (1,6)-> (1,5)

    // now want to store in descending order
    // for that use negation while inserting

    // pqp.push(-1);
    // pqp.push(-5);
    // pqp.push(-6);
    // pqp.push(-7);

//    cout << -1 * pq.top() << endl; // prints 1

    // if I dont want to do negation then
// minimum element
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(1);
    pq1.push(5);
    pq1.push(6);
    pq1.push(7);

    cout<<pq1.top(); // prints 1


    //dqueue

    deque <int > dq;
    /*dq.push_front();
    dq.push_back();
    dq.pop_back();
    dq.pop_front();
    begin ,rbegin ,rend end
    size 
    clear 
    empty
    at  */




    return 0;
}