#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int visited[26] = {0};
        int balloons = 0;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];       // current problem
            int index = c - 'A'; // convert A-Z to 0-25

            if (visited[index] == 0)
            {
                balloons += 2;      // first time -> 2 balloons
                visited[index] = 1; // mark as solved
            }
            else
            {
                balloons += 1; // solved before -> 1 balloon
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
