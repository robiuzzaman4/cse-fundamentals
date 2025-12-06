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

Student *fun()
{
    Student *Ruhan = new Student(4, 10, 4.06);
    return Ruhan;
}

int main()
{
    Student *ruhan = fun();

    cout << ruhan->roll << " " << ruhan->cls << " " << ruhan->cgpa;

    return 0;
}