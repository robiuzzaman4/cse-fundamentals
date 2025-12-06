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

        int part1_number = n / 1000;
        int part1_sum = 0;

        while (part1_number > 0)
        {
            part1_sum += part1_number % 10;
            part1_number /= 10;
        }

        int part2_number = n % 1000;
        int part2_sum = 0;

        while (part2_number > 0)
        {
            part2_sum += part2_number % 10;
            part2_number /= 10;
        }

        if (part1_sum == part2_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}