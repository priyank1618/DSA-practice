/*
1 
1 0 1
1 0 0 0 1
1 0 0 0 0 1
*/


#include<iostream>
using namespace std;

int main()
{

    int n=4;
    for (int i = 0; i < n; i++)
    {
       for(int j=0;j<=i;j++)
       {
        if(j==0) cout << 1 << " ";
        else cout << 0 << " ";
       }

       for(int j=1;j<=i;j++)
       {
        if(i==j) cout << 1 << " ";
        else cout << 0 << " ";
       }

       cout << endl;
    }
    
}