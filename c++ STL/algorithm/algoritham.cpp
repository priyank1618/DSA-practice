#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,9,11,10};
    int n=sizeof(arr)/sizeof(int);
    

    // search --> find
    int key=11;
    auto it = find(arr,arr+n,11);
    int index = it - arr;
    cout << index << endl;



//here binary search can possible starting iterator , last itreator and then const value
bool present = binary_search(arr,arr+n,11);
cout << present << endl;


}


