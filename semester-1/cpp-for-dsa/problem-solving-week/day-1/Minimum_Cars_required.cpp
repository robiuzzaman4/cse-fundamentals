#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float n;
        cin >> n;

        double minimum_car_count = 1;

        if (n >= 4)
        {
            minimum_car_count = n / 4;
        }

        cout << ceil(minimum_car_count) << endl;
    }

    return 0;
}
