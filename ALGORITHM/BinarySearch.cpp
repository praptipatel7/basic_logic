//=============================================================================================
//Binary Search (Iterative)
// #include<iostream>
// #include<vector>
// using namespace std;

// int BinarySearch(vector<int> arr, int target){
//     int st=0, end=arr.size()-1;
//     while(st<=end){
//         int mid = (st+end)/2;
//         if(target>arr[mid]){
//             st=mid+1;
//         }
//         else if (target< arr[mid]){
//             end=mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1; 

// }

// int main(){
//     vector<int> arr1={1,4,6,8,9};
//     int target1 = 9;
//     cout<<BinarySearch(arr1,target1)<<endl;

//     vector<int> arr2 = {-1,0,2,4,5,7};
//     int target2 = 0;
//     cout<<BinarySearch(arr2,target2)<<endl;

//     return 0;
// }



//=============================================================================================
//Binary Search (Recursion)
#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int target, int start, int end){    
    int mid = start + (end - start)/2;
    if(target > arr[mid]){
        return BinarySearch(arr, target, mid+1, end);
    }
    
    else if (target < arr[mid]){
        return BinarySearch(arr, target, start, mid-1);
    }
    
    else{
        return mid;
    }
    return -1; 
}
int main(){
    vector<int> arr1={1,4,6,8,9};
    int target1 = 9;
    cout<<BinarySearch(arr1,target1,0,arr1.size()-1)<<endl;

    vector<int> arr2 = {-1,0,2,4,5,7};
    int target2 = 0;
    cout<<BinarySearch(arr2,target2,0,arr2.size()-1)<<endl;

    return 0;

}