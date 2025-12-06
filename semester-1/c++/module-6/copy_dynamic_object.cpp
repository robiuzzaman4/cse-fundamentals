#include <bits/stdc++.h>
using namespace std;

class Cricketer
{

public:
    string country;
    int jersey_no;
    Cricketer(string country, int jersey_no)
    {
        this->country = country;
        this->jersey_no = jersey_no;
    }
};

int main()
{
    Cricketer *mahmudullah = new Cricketer("Bangladesh", 30);
    Cricketer *musfik = new Cricketer("Bangladesh", 15);

    // musfik = mahmudullah; // copy full object
    // musfik->country = mahmudullah->country; // copy individual value
    // musfik->jersey_no = mahmudullah->jersey_no; // copy individual value

    *musfik = *mahmudullah; // copy with derefrence pointer 

    delete mahmudullah;

    // cout << mahmudullah->country << " " << mahmudullah->jersey_no << endl;
    cout << musfik->country << " " << musfik->jersey_no << endl;

    return 0;
}