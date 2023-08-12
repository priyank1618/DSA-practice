/*
Input Format: N = 5
Result:
1 2 3 4 5
1 2 3 4           janji loop ---------> same in j  ---> print the n-j+1
1 2 3
1 2 
1
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

    int n=5;



    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
           cout << j-i+1<< " ";
        }
        cout << endl;
    }
}
