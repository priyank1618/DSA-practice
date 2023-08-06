#include <iostream>
using namespace std;
int main(){


    //creat the 2d array
    int arr[3][4];


    // taking input in array 
    //it take input row wise like row is in 1st loop
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
        
    }

    // output of the array of row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
        
    }
    
    // taking input in array 
    //it take input col wise like row is in 1st loop
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
        
    }

    // the output loops will be same in both types of the input

    // output of the array of col wise input
    for (int row = 0; row< 3; row++)
    {
        for (int col= 0; col< 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
        
    }
    
    
    
}

// input
//1 2 3 4 5 6 7 8 9 10 11 12