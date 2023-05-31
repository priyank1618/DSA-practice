#include<iostream>
#include <climits>
using namespace std;

int maxi(int arr[],int n)
{   
   
    if(n==0) return 0;

    
    //tukde tukde gang kar do
   if(arr[0] > maxi(arr+1,n-1)) return arr[0];
   else return maxi(arr+1,n-1);

}

int main()
{
   int arr[5]={32,21,55,99,77} ;
   int n=5;

   int ans=maxi(arr,n);
   cout << ans;
}