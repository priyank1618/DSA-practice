/*
12345
*2345
**345
***45
****5
*/


/*
12345
*2345
*A5
***45
****5
*/



#include<iostream>
using namespace std;

int main()
{
    int n=5;;
    for(int i=0;i<n;i++)
   { 
       for(int j=1;j<=n;j++)
       {
          if(i==2 && j==2) cout << "A ";
          else if(i==2 && j==4 or i==2 and j==5) cout<< "";
          else if(i==2 && j==3) cout << 5 ;
          else if(j>i) cout << j << " ";
          else cout << "* ";
       }
       cout << endl;
   }
       
    
}