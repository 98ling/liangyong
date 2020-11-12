#include<iostream>
#include<vector>
using namespace std;

int sum(const vector<vector<int>>& matrix)
{
    int total = 0;
    for (unsigned row = 0; row < matrix.size(); row++)
    {
        for (unsigned column = 0; column < matrix[row].size(); column++)
        {
            total += matrix[row][column];
        }
    }
    return total;
}

int main()
{
    vector<vector<int>> matrix(4);

    for(unsigned i = 0;i<4;i++)
    {
        matrix[i] = vector<int>(3);
        //each row has 3 columns
    }
    
    unsigned count = 1;

    for (unsigned k = 0;k < 4;k++)
    {

        for (unsigned j = 0; j < 3; j++)
        {
            matrix[k][j] = count;
            count++;
        }
    }

    cout << "sum of all elements is "<<sum(matrix)<<endl;
}