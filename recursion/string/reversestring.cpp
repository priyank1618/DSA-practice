#include <iostream>
#include<algorithm>
using namespace std;

void reverse(string& s,int i,int j){

cout << s << endl;
     // base case
     if(i>j)
     return;
     swap(s[i],s[j]);
     i++;
     j--;
     reverse(s,i,j);
}
int main(){
    string name="abcde";
    reverse(name,0,name.length()-1);
    cout << endl;

    cout << name << endl;
}