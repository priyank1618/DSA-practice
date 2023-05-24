#include<iostream>
using namespace std;

//debug for 4

//for 4 = 4*func(3)= 4*6 = 24  send to final ans 
//for 3 = 3*func(2)= 3*2 = 6 send upward
//for 2 = 2*func(1) =2*1= 2 send upward
//for 1 = 1 * func(0) = 1*1= 1 send upward
//for 0 = reach base case and send 1 to upward


//recursive function
int factorial(int n)
{
    //base case
    if(n==0) return 1;

    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}