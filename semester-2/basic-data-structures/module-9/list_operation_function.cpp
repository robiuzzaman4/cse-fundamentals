#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 10, 40, 10, 10, 50, 60, 70, 80};

    // l.remove(10);            // remove all 10
    // l.sort();                // sort in asc order
    // l.sort(greater<int>());  // sort in desc order
    // l.unique();              // return unique values, remove duplicates (but list must be sorted)
    // l.reverse();                // reverse linked list

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}