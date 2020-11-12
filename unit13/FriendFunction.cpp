#include <iostream>
using namespace std;

class Date
{
public:
    Date(int year, int month, int day)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    friend void p();
cd 
private:
    int year;
    int month;
    int day;
};

void p()
{
    Date date(2015, 5, 9);
    date.year = 2019;
    cout << date.year << endl; //Friend function can modifiy other class private date
}

int main()
{
    p();

    return 0;
}
