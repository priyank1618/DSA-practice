
// Time complexity best case o(n) and worst case o(n^2)
//  space complexity o(1)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> insertionsort(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    return arr;
}
void printvector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a = {1, 7, 5, 6, 3, 9};
    vector<int> c = insertionsort(a);
    printvector(c);
    return 0;
}