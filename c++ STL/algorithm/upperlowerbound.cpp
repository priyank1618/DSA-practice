#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr1[]={1,9,11,11,11,11,12};

    int m=sizeof(arr1)/sizeof(int);

// two more things
// get the index of the element
//lower_bound(start,end,key) it give the address of greater than or equal the key
//upper_bound(start,last,key) it gives the address of greater the key

// auto it can be used as int* it
auto it =lower_bound(arr1,arr1+m,11);
cout << endl << " lower bound is "<< (it - arr1)<< endl;
auto it1 =upper_bound(arr1,arr1+m,11);
cout << endl << " upper bound is "<< (it1 - arr1)<< endl;

// here upper bound gives you --> 12 which is at 6 index 
// here lower bound gives you--> 11 which is at 2 index
// the difference between them give the occurance of the number

}
