#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {

        long long int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}