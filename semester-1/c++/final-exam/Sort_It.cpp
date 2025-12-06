#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    int total_marks()
    {
        return this->math_marks + this->eng_marks;
    }
};

bool comp(Student l, Student r)
{
    if (l.total_marks() == r.total_marks())
    {
        return l.id < r.id;
    }
    else
    {
        return l.total_marks() > r.total_marks();
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm;
        cin >> a[i].cls;
        cin >> a[i].s;
        cin >> a[i].id;
        cin >> a[i].math_marks;
        cin >> a[i].eng_marks;
    }

    sort(a, a + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm;
        cout << " ";
        cout << a[i].cls;
        cout << " ";
        cout << a[i].s;
        cout << " ";
        cout << a[i].id;
        cout << " ";
        cout << a[i].math_marks;
        cout << " ";
        cout << a[i].eng_marks;
        cout << endl;
    }

    return 0;
}