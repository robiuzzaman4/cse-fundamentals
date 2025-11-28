#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "Hello from: " << this->name << endl;
    }
};

int main()
{
    Student sakib("Ruhan", 24);
    Student rakib("Rakib", 24);

    sakib.hello();
    rakib.hello();

    return 0;
}