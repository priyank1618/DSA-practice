/*

* 
* * 
* * * 
* * * *         jieqi if n=3 and star is 3
* * * * *       and ji for if n=3 and star is 2

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
            cout << "*" << " ";
        }
        cout << endl;
    }
}