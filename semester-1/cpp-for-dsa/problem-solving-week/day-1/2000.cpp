#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int notes_count_500 = 2000 / 500;
    int result = notes_count_500 * n;
    cout << result;

    return 0;
}