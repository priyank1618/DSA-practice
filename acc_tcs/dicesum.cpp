/*

there is two dice are given throw randomly

return the how many ways to get that sum

2--->1
3--->2
4--->3
5-->4
6-->5
7--->6
8--->5
9-->4
10-->3
11--->2
12-->1
*/
#include<iostream>
#include<cstring>
#include<algorithm>
#include<functional>
#include<unordered_map>
using namespace std;

int main()
{
    int n;cin>>n;

   int arr[14]={0,0,1,2,3,4,5,6,5,4,3,2,1};

   if(n >= 2 or n<= 12) cout << arr[n];
   else cout << -1;
}