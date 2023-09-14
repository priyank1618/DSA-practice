/*
1
1 3
1 3 5
1 3 5 7
*/


#include <iostream>
using namespace std;


int main()
{
	
	   
	for(int i=0;i<4;i++)
    {
          int num=1;
        for(int j=0;j<=i;j++)
        {
            cout << num << " ";
            num=num+2;

    
        }
        cout << endl;
    }
}