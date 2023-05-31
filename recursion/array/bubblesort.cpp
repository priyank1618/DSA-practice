#include<iostream>
#include <climits>
using namespace std;

void bubblesort(int arr[],int n)
{

    // base case
    if(n==0 or n==1 ) return;
   //adjecent swap hoy and first try ma last elememt je jay e biggest num hoy


   //solve 1 case 
   for(int j=0;j<n-1;j++)
   {
       if(arr[j]>arr[j+1])
       {
        swap(arr[j],arr[j+1]);
       }
   }

   //n-1 arr mate aa kari de je upar karyu;
    bubblesort(arr,n-1);
   
}

int main()
{
       int arr[5]={32,21,55,99,77} ;
       int n=5;

       bubblesort(arr,n);

       for(int i=0;i<n;i++)
       {
        cout << arr[i] << " ";
       }

      

}