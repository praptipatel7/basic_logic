//============================================================================
//BRUTE FORCE APPROACH FOR PRODUCT OF ARRAY EXCEPT SELF
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> nums={1,2,3,4};
//     vector<int> ans(nums.size() , 1 );
//     for(int i=0 ; i<nums.size() ; i++){
//         int prod = 1;
//         for(int j=0 ; j<nums.size() ; j++){
//             if(i!=j){
//                 prod*=nums[j];
//             }
//         }
//         ans[i]=prod;
//     }
//     cout<<"[";
//     for(int i=0 ; i<ans.size() ; i++){
//         cout<<ans[i] <<"   ";
//     }
//     cout<<"]";
//     return 0;
// }






//============================================================================
//Optimal solution
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};
    int n=nums.size();
    vector<int> ans(n, 1);
    //prefix => ans
    for(int i=1 ; i<n ; i++){
        ans[i] = ans[i-1]*nums[i-1];
    }
    int suffix =1;
    //suffix
    for(int i=n-2 ; i>=0 ; i--){
        suffix *=nums[i+1];   
        ans[i]*=suffix;
    }
    for(int val:ans){
        cout<<val<<"   ";
    }
    return 0;
}