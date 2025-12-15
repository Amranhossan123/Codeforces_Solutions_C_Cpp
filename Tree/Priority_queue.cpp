#include <bits/stdc++.h>
using namespace std;
int main()

{
    // max queue;
    //  priority_queue<int> pq;
    //  pq.push(10);
    //  pq.push(20);
    //  pq.push(30);
    //  pq.push(40);

    // cout<<pq.size()<<endl;

    // cout<<pq.top()<<endl;

    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    // min queue;
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout << pq.size() << endl;

    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    return 0;
}