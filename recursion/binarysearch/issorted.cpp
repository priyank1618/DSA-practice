#include<iostream>
using namespace std;


//debug for 1-2-3-4-5

//for(arr,5) 1-2-3-4-5
//for(arr+1,size-1) 2-3-4-5
//for(arr+1,size-1) 3-4-5
//for(arr+1,size-1) 4-5----------> true ave send upto first
//for(arr+1,size-1) 5------------------------------> which send true as per base case upward

bool issorted(int arr[],int size)
{
    //jo array ma 0 k 1 elemnt hoy to already sorted hoy
    //base case
    if(size==0 or size== 1) return true;
    
    //process
    if(arr[0] > arr[1]) return false;

    //recursive call
    else return issorted(arr+1,size-1);

}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;

   bool ans= issorted(arr,size);

   if(ans) cout <<"sort 6" << endl;
   else cout << "sort nathu" << endl;

   return 0;
}