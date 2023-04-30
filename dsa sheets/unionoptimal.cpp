#include<bits/stdc++.h>
using namespace std;

//in this optimal solution the t.c will be (n1+n2) 
// s.c (n1+n2) to return the ans

vector<int> UnionArray( vector<int> p1, vector<int> p2)
{
    //we will use two pointer in both array
    //first array ma i=>0 par hase and 2nd array ma j=>0 par hase

    int i=0,j=0;


    // take one vector for returning the ans
    vector<int> ans;
     

    //both ma same elements hoy
    while(i < p1.size() && j < p2.size())
    {

        if(p1[i] <= p2[j])
        {
          if(ans.size() == 0 || ans.back() != p1[i])
          {
              ans.push_back(p1[i]);
          }
          i++;
        }
       
       else{
        if(ans.size() == 0 || ans.back() != p2[j])
        {
            ans.push_back(p2[j]);
        }
        j++;
       }
    }

    // i vada array ma elements rai gaya hoy
    while(i < p1.size())
    {
         if(ans.size() == 0 || ans.back() != p1[i])
          {
              ans.push_back(p1[i]);
          }
          i++;

    }
    
    // j vada array ma elements rai gaya hoy
    while(j < p2.size())
    {
      if(ans.size() == 0 || ans.back() != p2[j])
        {
            ans.push_back(p2[j]);
        }
        j++;
    }

    return ans;


}











int main(){                     
    vector<int> p1{1,1,2,3,4,5};
    vector<int> p2{2,3,4,4,5,6};

vector<int> p3= UnionArray(p1,p2);

for(auto it:p3)
{
    cout << it << " ";
}

 }