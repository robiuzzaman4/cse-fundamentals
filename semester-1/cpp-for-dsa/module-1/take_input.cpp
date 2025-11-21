#include <iostream>
using namespace std;

int main()
{
    // take `int`, `char`, `double` input
    int n;
    char c;
    double d;

    cin >> n >> c >> d;

    cout << "Your Inputs:" << endl;
    cout << "int: " << n << endl;
    cout << "char: " << c << endl;
    cout << "double: " << d << endl;

    // ascii
    int ascii_of_char = c;
    cout << ascii_of_char << endl;

    // type casting
    cout << "type casting: " << (int)c << endl;

    return 0;
}