#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long int moves = 0;
    long long int prev = arr[0];

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];

        if (curr < prev)
            moves += (prev - curr);
        if (curr > prev)
            prev = curr;
    }

    cout << moves << endl;

    return 0;
}