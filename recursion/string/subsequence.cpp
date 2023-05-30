#include<iostream>
using namespace std;

void print(string ip,string op)
{
    //base case
    if(ip.length()==0)
    {
        cout << op << endl;
        return;
    }

    //recursive calls
    print(ip.substr(1),op);
    print(ip.substr(1),op+ip[0]);
}
int main()
{
    string ip="abc";
    string op="";
    print(ip,op);
}
