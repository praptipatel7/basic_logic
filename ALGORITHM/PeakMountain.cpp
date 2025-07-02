//============================================================
//Peak Index in mountain Array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={0,2,1,0}; 
    int n =arr.size();
    int start=1, end=n-2;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid;
            return 0;
        }
        else if(arr[mid]>arr[mid-1]){
            start=mid+=1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;   
}