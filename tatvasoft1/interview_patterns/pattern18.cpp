/*
1
1 3 5
1 3 5 7 9
*/



#include <iostream>
using namespace std;


int main()
{
	
	int d=0;   
	for(int i=0;i<3;i++)
    {
          int num=1;
        for(int j=0;j<=d;j++)
        {
            cout << num << " ";
            num=num+2;
        }
        d=d+2;
        cout << endl;
    }
}