#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char rod_from, char rod_to,
                  char rod_aux)//from rod -a to rod -c aux rod- b
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, rod_from, rod_aux, rod_to);
    cout << "Move disk " << n << " from rod " << rod_from
         << " to rod " << rod_to << endl;
    towerOfHanoi(n - 1, rod_aux, rod_to, rod_from);
    cout << endl;
}
 
// Driver code
int main()
{
    int N = 3;
 
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}