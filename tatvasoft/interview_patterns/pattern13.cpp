/*
1 * * * * * * 
* 2 3 4 * * * 
* * * 4 5 6 7
*/


#include<iostream>
using namespace std;


int main()
{
    int x=1,l=1;
    
     for(int i=0;i<3;i++)
     {

         for(int j=0;j<=2*(i-1);j++)
         {
            if(i>0)
            cout << "* ";
         }


         for(int k=l;k<=x;k++)
         {
            cout << k << " ";
         }


         for(int p=0;p<7-x;p++)
         {
            cout << "* ";
         }


         if(x==4) l++;
         cout << endl;
         x=x+3;l++;
         
     }
}