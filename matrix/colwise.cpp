#include<iostream>
using namespace std;


int main(){

     int arr[3][4] ;

    //take input using two loop
    cout << "enter the values" << endl;
    for (int col= 0; col < 4; col++)
    {
       for (int row = 0; row < 3; row++)
       {

        cin >> arr[row][col];
       }
       
    }

    //print it
     for (int row = 0; row < 3; row++)
    {
       for (int col = 0; col < 4; col++)
       {

        cout << arr[row][col] <<" ";
       }
       cout << endl;
    }

    return 0;
    
}