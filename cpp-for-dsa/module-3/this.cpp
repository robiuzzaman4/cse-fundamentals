#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int roll;
    int cls;
    int cgpa;
    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

int main()
{
    Student Ruhan(4, 10, 4.06);

    cout << Ruhan.roll << " " << Ruhan.cls << " " << Ruhan.cgpa;

    return 0;
}