#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    cout << min({10, 20, 16, 30}) << endl;
    cout << max({10, 50, 10, 30}) << endl;

    swap(a, b);
    cout << a << " " << b << " " << endl;

    return 0;
}