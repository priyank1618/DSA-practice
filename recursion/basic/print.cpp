#include <iostream>
using namespace std;
void print(int n)
{
    // base case
    if (n == 0)
        return ;

    cout << n << endl;
    print(n-1); //recursive call
}
void print1(int n)
{
    // base case
    if (n == 0)
        return ;

    print1(n-1); //recursive call
    cout << n << endl;
}
int main()
{
    int n;
    cout << "enter the num want you print" << endl;
    cin >> n;
    print(n);
    print1(n);
}