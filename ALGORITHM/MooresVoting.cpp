//=============================================================================================
//MAJORITY ELEMENTS USING BRUTE FORCE APPROACH 
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec = {1,2,2,2,1};
//     int n =vec.size();
    
//     for(int i=0 ; i<n ; i++){
//         int count=0;
//         for(int j=0 ; j<n ; j++){
//             if(vec[i]==vec[j]){
//                 count++;
//             }
//         } 
//         if(count>n/2){
//             cout<<"MAJORITY ELEMENT IS : "<<vec[i]<<endl;
//             break;
//         }  
//     }
//     return 0;
// }








//=============================================================================================
// Optimised sol. using sorting
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int> vec = {1,1,2,2,1};
//     int n =vec.size();

//     //sort
//     sort(vec.begin() , vec.end());

//     //freq count
//     int freq=1 , ans=vec[0];
//     for(int i=1 ; i<n ; i++){
//         if(vec[i]==vec[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=vec[i];
//         }

//         if(freq > n/2){
//             cout<<"Majority Element is : "<<ans;
//         }
//     }
// }






//=============================================================================================
//Moore's Voting Algorithm to find Majority Element
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,2,1,1};
    int n =vec.size();
    int freq=0 , ans=vec[0];

    for(int val : vec){
        if(freq==0){
            ans=val;
        }
        if(ans==val){
            freq++;
        }
        else{
            freq--;
        }
        
    }


    int count=0;
    for(int val : vec){
        if(val==ans){
            count++;
        }
    }
    if(count> n/2){
        cout<<"Majority Element is : "<<ans<<endl;
    }
    else{
        cout<<"NO Majority Element. "<<endl;
    }
    return 0;
}