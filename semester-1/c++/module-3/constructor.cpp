#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int roll;
    int cls;
    int cgpa;
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        cgpa = g;
    }
};

int main()
{
    Student Ruhan(4, 10, 4.06);

    cout << Ruhan.roll << " " << Ruhan.cls << " " << Ruhan.cgpa;

    return 0;
}