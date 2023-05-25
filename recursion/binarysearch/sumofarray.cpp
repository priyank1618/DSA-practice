#include<iostream>
using namespace std;


//debug for 1-2-3-4-5

//for-1(arr,size) 1-2-3-4-5    1+14=15 
//for-2(arr+1,size-1) 2-3-4-5  2+12=14
//for-3(arr+1,size-1) 3-4-5--> 3+9=12
//-----------------------------------------------------------------------------------
//you can make cond from here
//su return thay 6 sum(arr+1,size-1) to thay j 6 ama arr[0] add kar do
//for-4(arr+1,size-1) 4-5  -> arr[0]+5=9 return upwards
//--------------------------------------------------------------------------------
//for-5(arr+1,size-1) 5----> return as per base case -> 5 upwards


int sum(int arr[],int size)
{
    //jo size 0 to sum=0 and size 1 hoy to e element j sum thay
    //base case
    if(size==0) return 0; if(size==1) return arr[0];
    return arr[0]+sum(arr+1,size-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;

   int ans= sum(arr,size);

   if(ans) cout << ans << endl;

   return 0;
}