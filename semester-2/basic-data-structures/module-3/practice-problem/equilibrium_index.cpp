#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int total_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total_sum += v[i];
    }

    int left_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int right_sum = total_sum - left_sum - v[i];

        if (left_sum == right_sum)
        {
            cout << i;
            break;
        }
        left_sum += v[i];
    }

    return -1;

    return 0;
}


/**
 * 
 *  Equation:
 *  Total Sum = Left Sum + v[i] + Right Sum
 *  Right Sum = Total Sum - Left Sum - v[i] (for line number: 22 👆)
 * 
 */