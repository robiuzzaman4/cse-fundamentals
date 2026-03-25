#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    string str_num = to_string(n);

    sort(str_num.begin(), str_num.end());

    bool is_lucky = false;

    for (int i = 0; i < str_num.length(); i++)
    {
        if (str_num[i] == '7')
        {
            is_lucky = true;
            break;
        }
    }

    if (is_lucky)
        cout << "Lucky";
    else
        cout << "Not Lucky";

    return 0;
}