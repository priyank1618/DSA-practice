/*
1
2*2
3*3*3
4*4*4*4
3*3*3
2*2
1
*/


#include <bits/stdc++.h>
using namespace std;


int main()
{
	
	   int d=3,h=1;
	for(int i=0;i<4;i++)
    {
      
        for(int j=0;j<=i;j++)
        {
           cout << h << " ";
           if(j<i)
            cout << "* ";
        }
        h++;
        cout << endl;
    }
	   
	for(int i=0;i<3;i++)
    {
      
      for(int j=3;j>i;j--)
        {
            cout << d << " ";
            if(j>i+1)
                cout << "* ";
        }
        d--;
        cout << endl;
    }
}
