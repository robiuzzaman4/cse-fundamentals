#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i *= 2) // O(logN)
    {
        cout << i << endl;
    }

    for (int i = n; i >= 1; i /= 3) // O(logN)
    {
        cout << i << endl;
    }
    return 0;
}