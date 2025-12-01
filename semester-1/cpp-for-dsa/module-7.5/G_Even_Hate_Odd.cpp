#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << -1 << endl;

            int temp_a;
            for (int j = 0; j < n; ++j)
            {
                cin >> temp_a;
            }
            continue;
        }
        int even_count = 0;
        int target_count = n / 2;

        int current_element;
        for (int j = 0; j < n; j++)
        {
            cin >> current_element;

            if (current_element % 2 == 0)
            {
                even_count++;
            }
        }

        int operation_count = abs(even_count - target_count);

        cout << operation_count << endl;
    }

    return 0;
}