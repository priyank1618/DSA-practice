#include<iostream>
using namespace std;


//write the function for the reverse the array
void reverse(int num[],int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end){
        //-------------------------- this logic can be written using variable
       // swap(num[start++],num[end--]);
  
        //---------------------------------------------2nd way
       int temp = num[start];
       num[start]= num[end];
        num[end]= temp;
        start++; end--;
       
    }
}



//print that array

void print(int num[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "  ";
   }
    
}





int main(){

     // one method to init
    // int array[5] = {1,2,3,4,5};


    //another way to take the input

    int n;

    cout << "enter the size   ";
    cin >> n;


    //make array using n
    int num[n];

     cout << "enter the element";
    //take input in array by loop
    for(int i=0;i<n;i++)
    {
        cin >> num[i] ;

    }


cout << "before reverse" << endl;
print(num,n);
cout << endl; 

reverse(num,n);

cout << "After reverse" << endl;
print(num,n);

    

}