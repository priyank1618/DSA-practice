#include <iostream>
using namespace std;
bool issorted(int arr[], int size)
{
    // base case
    // if 0 or 1 element then sorted array
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1]) // sorted nathi
        return false;
    else
    {
        bool remainingpart = issorted(arr + 1, size - 1);
        return remainingpart;
    }
}
int main()
{
    int arr[] = {2, 4, 5, 6, 8};
    int size = 5;
    bool ans = issorted(arr, size);
    if (ans)
        cout << "array is sorted";
    else
        cout << "sorted nathi";
    return 0;
}