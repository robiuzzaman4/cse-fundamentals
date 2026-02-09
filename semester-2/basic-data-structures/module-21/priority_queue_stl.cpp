#include <bits/stdc++.h>
using namespace std;

int main()
{
    // max pq
    priority_queue<int> max_pq;

    max_pq.push(10);
    max_pq.push(5);
    max_pq.push(30);
    max_pq.push(100);

    cout << max_pq.top() << endl;
    max_pq.pop();
    cout << max_pq.top() << endl;

    // min pq
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(10);
    min_pq.push(5);
    min_pq.push(30);
    min_pq.push(100);

    cout << min_pq.top() << endl;
    min_pq.pop();
    cout << min_pq.top() << endl;


    return 0;
}