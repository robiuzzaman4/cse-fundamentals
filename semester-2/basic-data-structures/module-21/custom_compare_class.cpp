#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class comp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks > r.marks)
            return true;
        else if (l.marks < r.marks)
            return false;
        else
            return l.roll > r.roll;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, comp> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << "Name: " << pq.top().name << ", Roll: " << pq.top().roll << ", Marks: " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}