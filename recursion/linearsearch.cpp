#include <iostream>
using namespace std;
bool linearsearch(int arr[], int size, int key)
{
    // base case
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else{
        //recursive call
         return linearsearch(arr+1,size-1,key);;
    }
}
int main()
{
    int key;
    cin >> key;
    int arr[] = {1, 3, 5, 7, 11, 21, 32};
    int size = 7;
    bool ans = linearsearch(arr, size, key);
if (ans)
        cout << "key is found";
    else
        cout << "not found";
    return 0;
}