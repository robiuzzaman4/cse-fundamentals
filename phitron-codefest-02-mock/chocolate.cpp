#include <bits/stdc++.h>
using namespace std;

long long int get_extra_chocolates(long long int wrappers)
{
    if (wrappers < 3)
    {
        return 0;
    }

    long long int new_chocolates = wrappers / 3;

    long long int wrappers_left_over = wrappers % 3;
    long long int next_round_wrappers = wrappers_left_over + new_chocolates;

    return new_chocolates + get_extra_chocolates(next_round_wrappers);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int initial_chocolates = n / 5;
        long long int total_chocolates = initial_chocolates + get_extra_chocolates(initial_chocolates);

        cout << total_chocolates << endl;
    }

    return 0;
}