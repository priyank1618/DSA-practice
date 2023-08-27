#include <iostream>
#include <algorithm>
using namespace std;

void reverse(string &s, int i)
{   cout << s<< endl;
    int n=s.length();
    // base case
    if (i > n -1 - i)
        return;
    swap(s[i], s[n - 1 - i]);
    
    i++;
    reverse(s,i);
}
int main()
{
    string name = "abcde";
    reverse(name, 0);
    cout << endl;

    cout << name << endl;
}