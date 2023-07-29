#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    


    vector<int> a={0,1,2,3,4,5,6,7,8,9};
    reverse(a.begin(),a.begin()+2);// here the start reverse from the last iterator-1=1 at index 2
    for(int x:a){
        cout<< x<<" ";
    }
}

// here can also use some basic functions like 
// swap,max,min