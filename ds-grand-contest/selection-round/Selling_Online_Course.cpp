#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;

    cin >> x;

    if (x == 0)
    {
        cout << 0;
        return 0;
    }

    float percent_off_commission = 0.20;

    double commission = percent_off_commission * x;

    double min_number_of_course = 100 / commission;

    cout << ceil(min_number_of_course);

    return 0;
}