#include<iostream>
using namespace std;


//debug for



bool bs(int arr[],int s,int e,int k)
{
    //cond of while loop will be base case'
    if(s>e) return false;


     //process
    int mid=s+(e-s)/2;

    //element found
    if(arr[mid]==k) return true;

    if(arr[mid] < k) return bs(arr,mid+1,e,k);
    else return bs(arr,s,mid-1,k);

}

int main(){
    int arr[5]={2,4,6,10,14};
    int n=5;
    int key=6;

   bool ans= bs(arr,0,n-1,key);

    if(ans)cout <<  "mali gayo" << endl;
    else cout << "na malyo" << endl;

   return 0;
}