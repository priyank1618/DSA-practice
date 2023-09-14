/*
1
1 3
1 3 5 
1 3 5 7 
1 3 5 7 9
*/

#include<iostream>
using namespace std;

int main()
{

    int n=5;
    
    for(int i=0;i<n;i++)
    {
         int d=1;
        for(int j=0;j<=i;j++)
        {
          cout << d << " ";
          d=d+2;
        }
        cout << endl;


    }
}