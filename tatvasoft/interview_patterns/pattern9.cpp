/*
   10 * * * 9 * * 8 * 7
   6  * * 5 * 4
   3 * 2
   1
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=10;

    for(int i=0;i<4;i++)
    {
        int l=0;
        for(int j=4;j>i;j--)
        {
            cout << num-- <<" ";
            
               for(int k=3-l;k>i;k--)
               {
                cout << "* ";
               } 
               l++;


        }
          cout << endl;
          l++;
    }
}