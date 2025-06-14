//=============================================================================================
//Find all the subarray
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};

//     for(int str=0 ; str<n ; str++){
//         for(int end=str ; end<n ; end++){
//             for(int i=str ; i<=end ; i++){
//                 cout<<arr[i];
//             }
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }








//=============================================================================================
//Maximum subarray sum using brute force method
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};

//     int maxsum=INT_MIN;
//     for(int str=0 ; str<n ; str++){
//         int CurrSum=0;
//         for(int end=str ; end<n ; end++){
//             CurrSum+=arr[end];
//             maxsum=max(CurrSum , maxsum);
//         }   
//     }
//     cout<<"Max Subarray Sum = "<<maxsum<<endl;
//     return 0;
// }








//=============================================================================================
//Maximum subarray sum using Kadane's algorithm 
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> vec={2,3,-4,5};
    int CurrSum=0,MaxSum=INT_MIN;

    for(int val: vec){
        CurrSum+=val;
        MaxSum=max(CurrSum,MaxSum);

        if(CurrSum<0){
            CurrSum=0;
        }

    }
    cout<<"Maximum subarray sum = "<<MaxSum;
    return 0;
}