/*
for n=3
0----->000
1----->001
2----->010
3----->011
4----->100
5----->101
6----->110
7----->111


set = 2 --> jema 2 bit set hoy e badha num no sum--> 3+5+8=14
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int func(int n,int set)
{
   int sum=0;

   for(int i=0;i<pow(2,n);i++)
   {
       int p=i,cnt=0;
        while(p != 0)
        {
            if(p&1) cnt++;

            p=p>>1;
        }

        if(cnt == set) sum=sum+i;
   } 

   return sum;
}

int main()
{
    int set=2;
    int n=3;

    cout << func(n,set);
}