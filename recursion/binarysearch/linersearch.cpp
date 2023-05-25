#include<iostream>
using namespace std;


//debug for 1-2-3-4-5 key==5
//for(arr+1,size-1) 2-3-4-5
//for(arr+1,size-1) 3-4-5 ---> 
//for(arr+1,size-1) 4-5----------> 
//for(arr+1,size-1) 5------------------------------> for key==5 mate arr[0]==5 thay to true return thay upward



bool linersearch(int arr[],int size,int key)
{
  //jo size 0 to return false
  if(size==0) return false;

 if(arr[0] == key) return true;

  return linersearch(arr+1,size-1,key);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=3;

    bool ans = linersearch(arr,size,key);

   if(ans) cout << "mil gaya" << endl;
   else cout << "nahi mila"<< endl;

   return 0;
}