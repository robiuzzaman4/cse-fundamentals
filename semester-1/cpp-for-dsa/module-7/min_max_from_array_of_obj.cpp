#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student min_marks_student;
    min_marks_student.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min_marks_student.marks)
        {
            min_marks_student = a[i];
        }
    }

    cout << min_marks_student.name << " " << min_marks_student.roll << " " << min_marks_student.marks << endl;

    Student max_marks_student;
    max_marks_student.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks > max_marks_student.marks)
        {
            max_marks_student = a[i];
        }
    }

    cout << max_marks_student.name << " " << max_marks_student.roll << " " << max_marks_student.marks << endl;

    return 0;
}