#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    string target = "Jessica";

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == target)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}