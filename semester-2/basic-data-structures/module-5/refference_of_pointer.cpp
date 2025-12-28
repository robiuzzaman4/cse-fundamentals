#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    // cout << "fun() => " << *p << endl;
    p = NULL;
}

int main()
{
    int x = 10;
    int *p = &x;

    fun(p);

    cout << "main() => " << *p << endl;

    return 0;
}