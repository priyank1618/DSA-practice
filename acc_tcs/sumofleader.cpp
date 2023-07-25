#include<iostream>
#include<cstring>
#include<algorithm>
#include<functional>
#include<unordered_map>
using namespace std;



int sumleader(int arr[],int n)
{
    int sum = arr[n-1];
    int leader = arr[n-1];

    for(int i=n-2;i>=0;i--)
    {
       if(arr[i] > leader)
       {
         leader=arr[i];
         sum=sum+arr[i];
       }
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

    int ans=sumleader(arr,n);

    cout << ans;

}