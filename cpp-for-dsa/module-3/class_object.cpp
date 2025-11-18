#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[101];
    int roll;
    double gpa;
};

int main()
{
    Student a, b;
    cin.getline(a.name, 101);
    cin >> a.roll >> a.gpa;

    cin.ignore();

    cin.getline(b.name, 101);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}