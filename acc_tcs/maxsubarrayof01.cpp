/*
here an array is given which consist value of zero and one only

you have to return maximum subarray size which contain the equal number of the zero and one

example

arr--> 0 0 1 0 1 

output will be--> 4 --> index 1 to last --> 0101

*/


#include<iostream>
#include<cstring>
#include<algorithm>
#include<functional>
#include<unordered_map>
using namespace std;

//function which return the max size 
int func(int *arr,int n)
{

    //take map
    unordered_map<int,int> mp;

    int sum=0,len=0;
     mp[0] = -1;

     //we use concept of prefix sum
     for(int i=0;i<n;i++)
     {
        sum += arr[i] == 1 ? 1 : -1;

        if(mp.find(sum) != mp.end())
        {
            len = max(len,i-mp[sum]);
        }
        else
        {
           mp[sum]=i; 
        }
     }

   return len;
    
}

int main()
{
    int n=5;
    int arr[n]={0,0,1,0,1};

    cout << func(arr,n);
    return 0;
}
