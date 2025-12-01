#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    char section;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    char temp_sections[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks >> a[i].section;
        temp_sections[i] = a[i].section;
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(temp_sections[i], temp_sections[j]);
    }

    for (int i = 0; i < n; i++)
    {
        a[i].section = temp_sections[i];
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << " " << a[i].section << endl;
    }

    return 0;
}