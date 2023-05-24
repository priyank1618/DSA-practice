#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{

    //step1--------- first element ne pivot dhari lo
    int pivot = arr[s];

    //step2--------sachi place sodho pivot ni
    int cnt=0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot)
        {
            cnt++;
        }
    }

    //step-3-------pivot ni sachi index sodhi swap karo
    int pivotindex = s+cnt;
    swap(arr[s],arr[pivotindex]);

    //step4-----pivotindex ma have apdo first element 6
    //now handle karo left and right part using two pointer approch

    int i=s,j=e;

    while(i < pivotindex and j > pivotindex)
    {
        while(arr[i]<=pivot) i++;  // dhyan se idhar less than opr equal to ata he................................
        while(arr[j]>pivot) j--;

        if(i < pivotindex and j > pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    } 
  return pivotindex;
}

void quicksort(int arr[],int s,int e)
{
    //we will ri8 it recursively
    if(s>=e) return;

    //partition karege
    int p = partition(arr,s,e);

    //left part handle karege
    quicksort(arr,s,p-1);

    //ri8 part handle karege
    quicksort(arr,p+1,e);
}

int main(){

    int arr[64] ={28,153,174,499, 281 ,117 ,471 ,367 ,281, 460 ,501 ,574, 277 ,156 ,926, 800 ,694 ,502, 445 ,723 ,700 ,519 ,752, 629 ,269, 76 ,357, 502 ,413 ,102 ,566 ,794 ,255 ,92, 293 ,888, 209 ,765 ,607 ,491 ,577, 460 ,417 ,854, 616, 343, 6 ,311 ,845 ,804 ,34 ,898 ,323, 138, 527 ,593 ,566, 884 ,447, 331 ,338 ,14 ,125 ,945};
    int n=64;

    //mergesort the array
    quicksort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}