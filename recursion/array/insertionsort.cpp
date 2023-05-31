#include<iostream>
#include <climits>
using namespace std;

void insertionsort(int arr[],int n)
{

    // base case
    if(n==0 or n==1 ) return;
   

   //first case ma insert karta nana ma nano elemenet apde array na left side ma moklta


   //solve 1 case 
   for(int j=n-1;j>=1;j--)
   {
       while(arr[j-1]>arr[j])
       {
        swap(arr[j],arr[j-1]);
       }
   }


   return insertionsort(arr+1,n-1);



   //n-1 arr mate aa kari de je upar karyu;
   
}

int main()
{
       int arr[5]={32,21,55,99,77} ;
       int n=5;

       insertionsort(arr,n);

       for(int i=0;i<n;i++)
       {
        cout << arr[i] << " ";
       }

      

}