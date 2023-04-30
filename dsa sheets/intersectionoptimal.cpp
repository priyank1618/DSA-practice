#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int> p1,vector<int> p2)
{
     int i=0,j=0;
     vector<int> ans;

     //we will iterate only the size of the array whuch is lesser
     //bcz agad same na hoi sake 



     //------logic is very simple
     // if i is smaller than i++ same for j
     //both same then put in ans and i and j plus plus

     while (i < p1.size() && j<p2.size())
     {
        if(p1[i] < p2[j]) {i++ ;}
      else if(p1[i] > p2[j]) {j++ ;}
      else{
        ans.push_back(p1[i]);
        i++;j++;
      }

     }
     
     return ans;
}

int main(){                     
    vector<int> p1{1,1,2,3,4,5};
    vector<int> p2{2,3,4,4,5,6};

vector<int> p3= intersectionArray(p1,p2);

for(auto it:p3)
{
    cout << it << " ";
}

 }