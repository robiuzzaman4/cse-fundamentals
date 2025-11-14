#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int star = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < star; k++)
        {
            cout << "*";
        }

        cout << "\n";
        star += 2;
        space--;
    }

    return 0;
}