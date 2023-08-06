#include <iostream>
using namespace std;
int getsum(int arr[3][4], int row, int col)
{
    for (int col  = 0; col  < 4; col ++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
            cout << sum << "  ";
    }
    return 0;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

        for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
        
    }
    cout << endl;
    getsum(arr, 3, 4);
    return 0;
}