#include <iostream>
using namespace std;
int largestrowsum(int arr[3][4], int row, int col)
{
    int maxi=-1;
    int rowindex=-1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
            if(sum>maxi){
                maxi=sum;
                rowindex=row;

            }
    }
    cout << "the maximum sum is  " << maxi << endl;
    return rowindex;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << endl;
    int i=largestrowsum(arr, 3, 4);
    cout << "the row which has greater sum is  "<< i << endl;
    return 0;
}