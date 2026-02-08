#include <iostream>
#include <string>
using namespace std;

// ক্যারেক্টারটি Vowel কি না তা চেক করার ফাংশন
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int consecutiveConsonants = 0;
    bool hardToPronounce = false;

    for (int i = 0; i < n; i++) {
        if (isVowel(s[i])) {
            // যদি Vowel পাই, তবে ধারাবাহিকতা ভেঙে গেল, তাই কাউন্টার ০ করে দেব
            consecutiveConsonants = 0;
        } else {
            // যদি Consonant পাই, তবে কাউন্টার ১ বাড়াবো
            consecutiveConsonants++;
        }

        // যদি টানা ৪টি Consonant হয়ে যায়
        if (consecutiveConsonants >= 4) {
            hardToPronounce = true;
            break; 
        }
    }

    if (hardToPronounce) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}