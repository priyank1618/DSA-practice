/*
Input Format: N = 5
Result:   
A 
B B
C C C
D D D D
E E E E E


*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;

    //jequi
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << char(i+65) << " ";
        }
        cout << endl;
    }
}