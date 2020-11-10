#include <iostream>
using namespace std;

int main()
{
    int p[4] = {1, 2, 3, 4};
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << p[0] << endl;
    cout << p[1] << endl;
    return 0;
}