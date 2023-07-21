// examples

/*

1)  element=3
    arr[3]={1,2,3};

    //operation
    abs(2-1)+abs(3-2)=2

    o/p=2
*/
/*

2)  element=4
    arr[3]={-2,1,4,6};

    //operation
    abs(1+2)+abs(4-1)+abs(6-4)=3+3+2=8

    o/p=2
*/



#include<iostream>
#include<cstring>
#include<functional>
#include<algorithm>
using namespace std;

int penalty(int arr[],int n)
{
     //for min penalty sort the array
     sort(arr,arr+n);
     int sum=0;

     for(int i=1;i<n;i++)
     {
         sum=sum+arr[i]-arr[i-1];
     }
     return sum;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int ans=penalty(arr,n);

    cout << ans;

}