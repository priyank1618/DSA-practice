/*
 j ma repeat --->jieql triangle
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}