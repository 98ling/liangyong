#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //open file
    ifstream input("score.txt");

    if (input.fail())
    {
        cout << "file does not exit" << endl;
        cout << "exit program" << endl;
        return 0;
    }

    double sum = 0;
    double number;
    while (input >> number)  //CONTINUE if not end of file
    {
        cout << number << " "; //display data
        sum += number;
    }

    input.close();
    cout << "total is" << sum << endl;
    return 0;
}