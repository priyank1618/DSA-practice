/*
*****3
***357
*357911
*/

#include<iostream>
using namespace std;


int main()
{
	
	   int d=5,x=0;
	for(int i=0;i<3;i++)
    {
        for(int j=d;j>0;j--)
        {
            cout << "* ";
        }
          
        int num=3;
        for(int j=0;j<=x;j++)
        {
            cout << num << " ";
            num=num+2;
        }
        d=d-2;
        x=x+2;
        cout << endl;
    }
}
