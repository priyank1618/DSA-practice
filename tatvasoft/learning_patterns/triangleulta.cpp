/*
* * * * *
  * * * *
    * * *
      * *
        *  
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    

    //ji triangle
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<i;j++)
       {
         cout << " ";
       }
        
        //janji triangle
        for (int j=n; j>i; j--)
        {
            cout <<"*";
        }
        cout << endl;
       
    }
}