#include<bits/stdc++.h>
using namespace std;

void selctionsort(int arr[],int n)
{
    //in the selection sort select the min element and swap it 

    for (int i = 0; i < n-1; i++) // this loop go to only n-2 element last element sort j hoy

    {
        int mini = i; //assume first index is mini now find smaller one
        for (int j = i+1; j < n; j++)// this will go to upto loop
        {
            if(arr[j] < arr[mini])
            {
                mini = j; // find mini and swap it
            }
        }

        swap(arr[i],arr[mini]);
        
    }
    
}

void bubblesort(int arr[],int n)
{
    //in the bubblesort we will done adjecent swap
    //and put the bigger element to the last of array


    //optimization ----if there is already sorted array present then the
    //2nd loop chalse nai

    for (int i = n-1; i>=0; i--)
    {
        int didswap = 0;
        for (int j = 0; j <=i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=1; // jo ek var bi loop chalse that means unsorted hatu and na chale to sort j hatu
            }

        }

        //break the loop if the didswap is zero
        if(didswap == 0)
        {
            break;
        }
        
    }
    
}

void insertionsort(int arr[],int n)
{

    for (int i = 0; i < n; i++)
    {
        // take first index in j
        int j=i;

        while(j>0 and arr[j-1] > arr[j]) // tuk ma j-1 vado element moto hoy to swap j and j-1 and j--
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    

}














int main (){
    int arr[6]={11,3,21,34,55,45};
    int n = 6;

    // selctionsort(arr,n);
    insertionsort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " "; 
    }

}