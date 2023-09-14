/*
1
321
54321
7654321
987654321
*/


#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int num;
    for(int i=0;i<n;i++)
    {
          num = 2*i+1;  
         for(int j=0;j<(2*i)+1;j++)
         {
            cout << num-- << " ";
            
         }
         cout<<endl;
    }
}