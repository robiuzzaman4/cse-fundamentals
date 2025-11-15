#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d = 24.56245;

    cout << fixed << setprecision(2) << d << endl;

    // << fixed << setprecision(2) => similar to ".2f" in "C Lang"

    return 0;
}