#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sat" << endl;
    case 2:
        cout << "Sun" << endl;
    case 3:
        cout << "Mon" << endl;
    case 4:
        cout << "Tue" << endl;
    case 5:
        cout << "Wed" << endl;
    case 6:
        cout << "Thu" << endl;
    case 7:
        cout << "Fri" << endl;
    default:
        cout << "Wrong input" << endl;
    }

    return 0;
}