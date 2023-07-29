
//Time complexity best case o(n) and worst case o(n^2)
// space complexity o(1)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> bubblesort(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        bool swaping= true;
        for (int j = 0; j < arr.size() - i; j++)
        {
            if (arr[j+1] < arr[j])
            {
                swap(arr[j],arr[j+1]);
                swaping =true;
            }
        }
        if (swaping=false){
            break;
        }
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
    vector<int> c=bubblesort(a);
    printvector(c);
    return 0;
}