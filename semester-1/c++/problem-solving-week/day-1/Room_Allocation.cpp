#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string number_of_peoples_line;
        cin.ignore();
        getline(cin, number_of_peoples_line);

        stringstream ss(number_of_peoples_line);
        string student_count_str;

        long long int total_rooms_needed = 0;

        while (ss >> student_count_str)
        {
            int students = stoi(student_count_str);
            double required_rooms_double = students / 2.0;
            total_rooms_needed += ceil(required_rooms_double);
        }

        cout << total_rooms_needed << endl;
    }

    return 0;
}