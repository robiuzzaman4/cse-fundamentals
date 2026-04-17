#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    map<int, int> counts;
    int max_freq = 0;
    
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        counts[size]++; 

        if (counts[size] > max_freq) {
            max_freq = counts[size];
        }
    }
    
    cout << max_freq << endl;

    return 0;
}