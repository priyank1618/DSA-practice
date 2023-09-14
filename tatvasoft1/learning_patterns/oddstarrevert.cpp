/*
***********
 *********
  *******
   ***** 
    ***    
     *

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;


    
    for(int i=0;i<n;i++)
    {


           //ji-space triangle
        for (int j=0; j<i; j++)
        {
            cout <<" ";
        }


        // janji star
       for(int j=n;j>i;j--)
       {
         cout <<"*";
       }
        
     
        //n-1 janji-star triangle
        for (int j=n-1; j>i; j--)
        {
            cout << "*";
        }

        cout << endl;
        
       
    }
}

