#include <iostream>
using namespace std;
void reachhome(int step,int destination){
    //base case
    if(step==destination)
    {
        cout << "bro home sweet home";
    }
    step = step +1;
    reachhome(step,destination);//recursive call mar di

}
int main()
{
    int step=1;
    int destination=10;

    cout << endl;
    
    reachhome(step,destination);
}