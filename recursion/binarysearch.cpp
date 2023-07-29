#include <iostream>
using namespace std;

bool binarysearch(int arr[], int start, int end, int key)
{
    // base case
    if (start > end)
        return 0;

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return 1;
    if (arr[mid] > key)
        binarysearch(arr, start, mid - 1, key);
    else
        binarysearch(arr, mid + 1, end, key);
}
int main()
{
    int key;
    cin >> key;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = 20;

    bool ans = binarysearch(arr, 0, 19, key);
if (ans)
        cout << "key is found";
    else
        cout << "not found";
    return 0;

}