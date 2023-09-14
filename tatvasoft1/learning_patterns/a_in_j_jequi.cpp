/*
Input Format: N = 5
Result:   
A
A B
A B C
A B C D
A B C D E


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
            cout << char(j+65) << " ";
        }
        cout << endl;
    }
}