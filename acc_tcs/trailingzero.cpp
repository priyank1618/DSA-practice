// in given factorial find trailing zeros

//examples

//1) 5!=120-->o/p-->1

//2)10!=3628800-->o/p-->2

//3)100!--> o/p-->24 



#include<iostream>
#include<cstring>
using namespace std;


int trailing(int n)
{
    int cnt=0;
    for(int i=5;n/i>=1;i=i*5)
    {
        cnt=cnt+n/i;
    }

    return cnt;
}

int main()
{
    int n;
    cin>>n;

    int ans=trailing(n);
    cout<< ans;

    return 0;
}