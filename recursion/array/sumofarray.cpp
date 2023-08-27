#include <iostream>
using namespace std;

int sumofarray(int arr[], int size)
{
    // base case
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];
    int sum=arr[0]+sumofarray(arr+1,size-1);
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int ans = sumofarray(arr, size);
    cout << "the sum of the array is" << ans;
}