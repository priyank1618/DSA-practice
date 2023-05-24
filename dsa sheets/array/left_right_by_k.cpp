#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// //time complexity o(2n) and space complexity o(n)
// void leftshift(int *arr,int n,int k)
// {
//     //step-1 make temporary array of n size
//     int temp[n];

//     //step-2 by shifting left fill the temp array by traversing the array
//     for (int i = 0; i < n; i++)
//     {
//         temp[(i-k+n)%n] = arr[i];
//     }

//     //step-3 put all the temp elements in main arr
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     }
    
// }
// //time complexity o(2n) and space complexity o(n)
// void rightshift(int *arr,int n,int k)
// {
//     //step-1 make temporary array of n size
//     int temp[n];

//     //step-2 by shifting right fill the temp array by traversing the array
//     for (int i = 0; i < n; i++)
//     {
//         temp[(i+k)%n] = arr[i];
//     }

//     //step-3 put all the temp elements in main arr
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     }
    
// }



//in above approch the space complexity will be liner we will try to constant it
//here time complexity will be o(2n) and space complexity will be constant
void leftshift(int *arr,int n,int k){
    reverse(arr,arr+k);reverse(arr+k,arr+n);reverse(arr,arr+n);
}
void rightshift(int *arr,int n,int k){
    reverse(arr,arr+n-k);reverse(arr+n-k,arr+n);reverse(arr,arr+n);
}





int main(){

    int arr[6] ={1,2,3,4,5,6};
    int n=6;

    int k;
    cout << "plz enter shift amount" << endl;
    cin>> k;

    //mergesort the array
    leftshift(arr,n,k);

    cout << "left shifted" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;


    cout <<"right shifted"<<  endl;

    rightshift(arr,n,k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}