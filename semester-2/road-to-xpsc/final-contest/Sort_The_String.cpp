#include <bits/stdc++.h>
using namespace std;

class CharInfo
{
public:
    char c;
    int freq;
    bool is_odd;

    CharInfo(char c, int freq, bool is_odd)
    {
        this->c = c;
        this->freq = freq;
        this->is_odd = is_odd;
    }
};

bool comp(const CharInfo &a, const CharInfo &b)
{
    if (a.is_odd != b.is_odd)
        return a.is_odd > b.is_odd;

    if (a.freq != b.freq)
        return a.freq < b.freq;

    return a.c < b.c;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int char_freq[26] = {0};

    for (int i = 0; i < n; i++)
        char_freq[s[i] - 'a']++;

    vector<CharInfo> v;

    for (int i = 0; i < n; i++)
    {
        char current_char = s[i];
        int freq_count = char_freq[current_char - 'a'];
        bool is_odd = (freq_count % 2 != 0);
        v.push_back(CharInfo(current_char, freq_count, is_odd));
    }

    sort(v.begin(), v.end(), comp);

    for (auto item : v)
        cout << item.c;

    return 0;
}