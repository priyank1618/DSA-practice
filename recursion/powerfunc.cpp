// power of the two
//  2^n =2 * 2^n-1

#include <iostream>
using namespace std;
int pow(int n)
{
    // base case
    if (n == 0) // any number's 0 power will be 1
        return 1;

    return 2 * pow(n - 1);
}

int main()
{
    int n;
    cout << "enter num" << endl;
    cin >> n;

    int ans = pow(n);
    cout << " 2 ni  " << n << " ghat " << ans << endl;
}