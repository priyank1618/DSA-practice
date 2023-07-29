/*
20 factors==== 1  2  5 10 20

sum opf primes== 2+5=7-->output



*/
#include<iostream>
#include<cstring>
#include<algorithm>
#include<functional>
#include<unordered_map>
using namespace std;


int main()\
{
    int n;cin>>n;

    int i=2,sum=0,unique_factor=-1;

    while(n>1)
    {
        if(n%i == 0)
        {
            if(i != unique_factor) sum=sum+i;
            unique_factor=i;
            n=n/i;
        }

        //now chnage i because old i can not devide number
        else i++;

    }

    cout << sum;
    return 0;
}