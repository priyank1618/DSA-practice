/*
     *     
    ***    
   *****   
  *******  
 ********* 
***********
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;


    
    for(int i=0;i<n;i++)
    {

        //n-1 janji-space
       for(int j=n-1;j>i;j--)
       {
         cout << " ";
       }
        
        //jieqi-star triangle
        for (int j=0; j<=i; j++)
        {
            cout <<"*";
        }

        //ji-star  triangle
        for (int j=0; j<i; j++)
        {
            cout <<"*";
        }

        cout << endl;
        
       
    }
}

