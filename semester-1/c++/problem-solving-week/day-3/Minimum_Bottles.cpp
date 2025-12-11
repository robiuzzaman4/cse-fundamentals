#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum_of_waters = 0;
        for (int i = 0; i < n; i++)
        {
            sum_of_waters += a[i];
        }

        cout << ceil((double)sum_of_waters / x) << endl;
    }

    return 0;
}