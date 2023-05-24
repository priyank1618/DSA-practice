#include<bits/stdc++.h>
using namespace std;


//merge function
void merge(int arr[],int s,int e)
{
    //step-1 mid nikalo
    int mid=(s+e)/2;

    //step-2 using this mid len nikalo dono arrays ki
    int len1 = mid-s+1; // here +1 for mid
    int len2 = e-mid;

    //step-3 using this len creat array
    int *first = new int[len1];
    int *second = new int[len2];

    //step-4 copy the values in that array
    int mainarrayindex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrayindex++];
    }

    

    mainarrayindex=mid+1;//bcz in this array mid is not it is in above array so mid+1

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarrayindex++];
    }


    //step-5 merge two sorted array

      int i=0,j=0;
      mainarrayindex=s;

      while (i < len1 and j < len2)
      {
         if(first[i]<second[j])
         {
             arr[mainarrayindex++] = first[i++];
         }

         else{
            arr[mainarrayindex++] = second[j++];
         }
      }

      while (i < len1)
      {
       arr[mainarrayindex++] = first[i++];
      }
      while (j < len2)
      {
       arr[mainarrayindex++] = second[j++];
      }
      
      
      
    
}




void mergesort(int arr[],int s,int e)
{
    //we will do merge sort usind recursion

    //first step of the recursion will be base case

    //base case start end thi agad vadhi jay k barbar thai jay nikdi jao
    if(s >= e)
    {
        return;
    }

    //mid 
    int mid = (s+e)/2;

    //left-part ne sort kar do
    mergesort(arr,s,mid);

    //ri8 part ko sort kardo
    mergesort(arr,mid+1,e);

    //merge that array
    merge(arr,s,e);

 
}


int main(){

    int arr[6] ={21,11,43,34,22,4};
    int n=6;

    //mergesort the array
    mergesort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}