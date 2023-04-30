#include<bits/stdc++.h>
using namespace std;



//two pointers approch
void sorting(vector<int> &num)
{
    //here two pointer approch is used so we will use while loop
    

    int start=0,end=num.size()-1;


// //move left side negative element
//     while(start <= end)
//     {
//       if(num[start] < 0) start++;
//       else if(num[end] > 0) end--;
//       else{
//         swap(num[start++],num[end--]);
//       }
//     }

// //move ri8 side negative element
//     while(start <= end)
//     {
//       if(num[start] > 0) start++;
//       else if(num[end] < 0) end--;
//       else{
//         swap(num[start++],num[end--]);
//       }
//     }


    // //using preserving order move left side
    // for (int i = 0; i < num.size(); i++)
    // {
    //     //first kam karo element store kar do
    //     int temp = num[i];
        

    //     // temp negtive na hoy to sidha agad vadho
    //    if(temp < 0)
    //    {
    //      int j = i-1;
    //     while (j >= 0 and num[j] >= 0) // jo index available hoy and element positive hoy to badlo
    //     {
    //         num[j+1] = num[j];
    //         j--; // have kadach ane agad ni index par negative madyo to bas agad j+1 ma temp nakhi do
    //     }
    //     num[j+1] = temp;
    //    }

        
    // }

    //using preserving order move ri8 side
    for (int i = 0; i < num.size(); i++)
    {
        //first kam karo element store kar do
        int temp = num[i];
        

        // temp negtive na hoy to sidha agad vadho
       if(temp > 0)
       {
         int j = i-1;
        while (j >= 0 and num[j] <= 0) // jo index available hoy and element positive hoy to badlo
        {
            num[j+1] = num[j];
            j--; // have kadach ane agad ni index par negative madyo to bas agad j+1 ma temp nakhi do
        }
        num[j+1] = temp;
       }

        
    }
    
    
    
}

int main(){
    vector<int> num{-3,11,-4,9,-8};


     sorting(num);


    for (auto it:num)
    {
        cout << it << "  ";
    }

}