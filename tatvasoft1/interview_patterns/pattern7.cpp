/*
1 1 
1 2 2 1
1 2 3 3 2 1
1 2 3 4 4 3 2 1
1 2 3 4 5 5 4 3 2 1

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
        cout<< d++ << " ";
      }
      
      int c=i;
      for(int j=i;j>=0;j--)
      {
        cout << (c+1) << " ";
        c--;
        
      }
      cout << endl;
   }
}