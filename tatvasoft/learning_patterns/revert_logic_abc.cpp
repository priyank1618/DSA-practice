/*
Input Format: N = 5
Result:   
E 
D E 
C D E 
B C D E 
A B C D E 

*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;


    //janji triangle
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << char(n-i+j-1+65) << " ";
        }
        cout << endl;
    }
}
