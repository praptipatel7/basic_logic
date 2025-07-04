//====================================================================
//Single Element in sorted array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,1,2,3,3,4,4,8,8};
    int n=arr.size();
    int st=0, end=n-1;
    if(n==1) return arr[0];
    if( arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];

    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) {
            cout<<mid;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid-1]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}