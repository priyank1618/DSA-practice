//Time complexity best case o(n^2) and worst case o(n^2)
// space complexity o(1)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> selectionsort(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int swaping = i;
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (arr[j] < arr[swaping])
            {
                swaping = j; // find smallest element
            }
        }
        swap(arr[swaping], arr[i]);
    }
    return arr;
}
void printvector(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
int main(){
    vector<int> a={1,7,5,6,3,9};
    vector<int> c=selectionsort(a);
    printvector(c);
    return 0;
}