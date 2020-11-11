#include <iostream>
#include <string>
using namespace std;

template<typename T>
T maxValue(T value1,T value2)
{
    if(value1>value2)
        return value1;
    else
        return value2;
}

int main()
{
    cout << "maximum between 1 and 3 is " << maxValue(1,3) << endl;
    cout << "maximum between 1.2 and 1.8 is " << maxValue(1.2,1.8) << endl;
    

    return 0;
}