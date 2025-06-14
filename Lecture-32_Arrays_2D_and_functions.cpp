#include <iostream>
#include <cmath>
using namespace std;

const int MAX_ROWS = 5;
const int MAX_COLS = 5;
void print(int arr[MAX_ROWS][MAX_COLS], int numRows, int numCols)
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void print1D(int arr[MAX_ROWS], int sz)
{
    for (int j = 0; j < numCols; j++)
        cout << arr[i][j] << " ";
}
int main()
{
    int arr[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {3, 1, 2}};
    print(arr, 2, 3);
    return 0;
}
