#include <iostream>
#include <string>
using namespace std;

template<typename T>
void Swap(T& var1,T& var2)
{
    T temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()
{
    int v1 =1;
    int v2 =2;
    Swap(v1,v2);

    double d1 = 1.0;
    double d2 = 2.0;
    Swap(d1,d2);

    // Swap(d1,v1); false
    // The two paramater are the same type because templete had define them.

    return 0;
}