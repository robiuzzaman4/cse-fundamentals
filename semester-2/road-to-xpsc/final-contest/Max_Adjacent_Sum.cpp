#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> a(n);
    vector<long long int> even_vals;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // পজিশন ২, ৪, ৬... মানে ইনডেক্স ১, ৩, ৫...
        if (i % 2 != 0)
        {
            even_vals.push_back(a[i]);
        }
    }

    // জোড় পজিশনের ভ্যালুগুলোকে বড় থেকে ছোট ক্রমে সর্ট করি
    sort(even_vals.rbegin(), even_vals.rend());

    long long max_sum = 0;
    int even_ptr = 0;

    // নতুন অ্যারে সাজানো: বেজোড়গুলো ফিক্সড থাকবে, জোড়ে বড়গুলো বসবে
    // আসলে আমাদের পুরো অ্যারে সাজানোর দরকার নেই, শুধু ম্যাক্সিমাম চেক করলেই হবে

    for (int i = 0; i < n; i++)
    {
        // যদি এটি একটি জোড় পজিশন (ইন্ডেক্স ১, ৩, ৫...) হয়
        if (i % 2 != 0)
        {
            long long current_even = even_vals[0]; // সবচেয়ে বড় জোড় সংখ্যাটি

            // বাম পাশের বেজোড় বক্সের সাথে যোগফল
            if (i - 1 >= 0)
            {
                max_sum = max(max_sum, current_even + a[i - 1]);
            }
            // ডান পাশের বেজোড় বক্সের সাথে যোগফল
            if (i + 1 < n)
            {
                max_sum = max(max_sum, current_even + a[i + 1]);
            }
        }
    }

    cout << max_sum << endl;

    return 0;
}