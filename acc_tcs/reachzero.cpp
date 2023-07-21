
// if n=5 

// here if n==odd then n-1

// if n==even do n/2

// untill reach the zero and return the number of steps to reach zero

#include<iostream>
#include<cstring>
using namespace std;

int reach(int n)
{
    int cnt=0;

    while(n != 0)
    {
       if(n % 2 != 0) n=n-1;

       else n=n/2;

       cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;

    int ans=reach(n);
    cout << ans;
}
