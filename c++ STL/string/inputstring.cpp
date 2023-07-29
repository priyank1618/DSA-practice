#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    string s[100];

    // we can take input with white space with the cin.get
    // getline function use to read the lines

    for (int i = 0; i < n; i++)
    {
        getline(cin,s[i]);
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    
}
