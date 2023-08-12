/*
Input Format: N = 5
Result:   
1
2  3                                 num++
4  5  6                               
7  8  9  10
11  12  13  14  15
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;
    int num=1;

    //jequi
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}