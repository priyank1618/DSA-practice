#include<iostream>
#include<string>
using namespace std;

int main(){

    string s="patel is back";

    //three way to access the string
    // for loop   iterator and  foreachloop

    //for loop
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i]<< "";
    }

    cout << endl;

    //iterator you can use auto in place of string::iterator
    for (string::iterator it = s.begin(); it!=s.end(); it++)
    {
        cout << (*it)<< "";
    }

    cout << endl;


    //foreach loop
    for( auto x:s){
        cout << x<<"";
    }
}