#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int freq_count = 1;
    int max_freq_count = 1;
    int max_element = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            freq_count++;
        }
        else
        {
            if (freq_count > max_freq_count)
            {
                max_freq_count = freq_count;
                max_element = a[i - 1];
            }

            freq_count = 1;
        }
    }

    if (freq_count > max_freq_count)
    {
        max_freq_count = freq_count;
        max_element = a[n - 1];
    }

    cout << max_element << " " << max_freq_count;

    return 0;
}