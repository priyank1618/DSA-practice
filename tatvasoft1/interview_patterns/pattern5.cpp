/*
* 2 3 4 5
* * 3 4 5 
* * * 4 5
* * * * 5
*/

#include<iostream>
using namespace std;

int main()
{
    int n=4;
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<=n;j++)
        {
             if(j>i) cout << j+1 << " ";
             else cout << "*" << " ";
        }
        cout<<endl;
    }
    
}