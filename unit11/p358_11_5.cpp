#include <iostream>
using namespace std;

int main()
{

    string s = "ABCD";
    string *p = &s;

    cout << p << endl;
    cout << *p << endl;
    cout << (*p)[0] << endl;

    return 0;
}