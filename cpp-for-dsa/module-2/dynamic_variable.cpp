#include <bits/stdc++.h>
using namespace std;

int *p;

void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "fun() => " << *p << endl;
    return;
}

int main()
{
    // int *n = new int;
    // *n = 100;
    // cout << *n << endl;
    fun();
    cout << "main() => " << *p << endl;
    return 0;
}