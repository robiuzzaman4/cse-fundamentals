#include <iostream>
using namespace std;

int main()
{
    // without space
    // char s[101];
    // cin >> s;
    // cout << s << endl;

    // with space
    char r[101];
    cin.getline(r, 101);
    cout << r;

    return 0;
}