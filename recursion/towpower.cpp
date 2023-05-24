#include<iostream>
using namespace std;

//debug for 3

//for 3 = 2*power(2) |   2*4 = 8
//for 2 = 2*power(1) |   2*2=4 
//for 1 = 2*power(0) |   2*1= 2 send upward
//for 0 = base case reach send 1 to upward above start execution from line 17

//recursive function
int power(int n)
{
    //base case 2^0=1
    if(n==0) return 1;

    return 2 * power(n-1);
}

int main()
{
    int n;
    cin>>n;

    int ans = power(n);

    cout << ans << endl;
}