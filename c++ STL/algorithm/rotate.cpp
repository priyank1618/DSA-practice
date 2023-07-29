#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // int arr[]={0,1,2,3,4,5,6,7,8,9,10};
    // int n=sizeof(arr)/sizeof(int);
    // rotate(arr,arr+2,arr+8);// this iterator will start rotate by mid element in this example 2 at index 2 and print untill last element -1 in this example 8-1=7 and start rotating from 0.......

    //     for (int i = 0; i < n; i++)
    // {
    //     cout<< arr[i] << " ";
    // }


    vector<int> a={0,1,2,3,4,5,6,7,8,9};
    rotate(a.begin(),a.begin()+2,a.end());
    for(int x:a){
        //cout<< x<<" ";
    }

    vector<int> b={1,2,3};
    next_permutation(b.begin(),b.end());//it give next possible permutation of the array it take two iterator 
    for(int x:b){
        cout<< x<<" ";
    }
}