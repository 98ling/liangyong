#include <iostream>
using namespace std;

int main()
{

    int x;
    const int* p = &x;
    int y;
    p = &y;
    // p point to a constant data 
    //you can change p ,but you can't change *p
    return 0;
}