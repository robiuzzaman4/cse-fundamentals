#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> severs;
    map<string, string> commands;

    for (int i = 1; i <= n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        severs[ip] = name;
    }

    for (int i = 1; i <= m; i++)
    {
        string cmd, ip_with_semicolon;
        cin >> cmd >> ip_with_semicolon;

        string server_ip = ip_with_semicolon.substr(0, ip_with_semicolon.size() - 1);
        string server_name = severs[server_ip];

        cout << cmd << " " << ip_with_semicolon << " #" << server_name << "\n";
    }

    return 0;
}