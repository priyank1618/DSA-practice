/*

n=5

A B C D E 
A B C D
A B C
A B
A

*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;


    //janji triangle
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout << char(n-j+65) << " ";
        }
        cout << endl;
    }
}