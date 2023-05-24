#include<iostream>
#include<algorithm>
using namespace std;



void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    
}

//------2nd approch rearrange t.c=o(n)
//o(n) means things will done in single traversal

void rearrange(int arr[],int n){

// we will use 3 variables
int start=0, mid=0 ,end=n-1;

//traverse using while loop untill mid <= end
while (mid <= end)
{
    if(arr[mid]==0){swap(arr[start++],arr[mid++]);}

   else if(arr[mid]==1){mid++;}

    else{swap(arr[end--],arr[mid]);}
}


}



int main(){
    int arr[9]={0,1,2,0,1,2,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);



// //---------1st approch sort the array t.c =o(nlogn)
//     sort(arr,arr+n);


    cout << "before rerrange" << endl; 
    print(arr,n);
    cout << endl;


    rearrange(arr,n);

    cout << "after rearrange" << endl;
     print(arr,n);
}








