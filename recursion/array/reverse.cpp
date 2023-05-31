#include<iostream>
using namespace std;


void reverse(int arr[],int n)
{
   if(n==0) return ;


   //tukde tukde ma array moklvo
   reverse(arr+1,n-1);

   //last tukda thi print karvo
   cout << arr[0]<< " "; 
}

int main()
{
   int arr[5]={1,2,3,4,5} ;
   int n=5;

   reverse(arr,n);
}