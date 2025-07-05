//===================================================================
//Aggressive Cow Problem (Similar to Book Allocation)
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> arr, int n, int c, int minAllowedDistance){
    int cows=1, lastStall=arr[0];
    
    for(int i=0 ; i<n ; i++){
        if(arr[i]-lastStall>=minAllowedDistance){
            cows++;
            lastStall = arr[i];
        }

        if(cows == c){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> arr, int n , int c){
    sort(arr.begin(), arr.end());

    int st=1, end=arr[n-1] - arr[0];
    int ans=-1;

    while(st<=end){
        int mid = st + (end-st)/2;
        if(isValid(arr, n, c, mid)){
            ans=mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;

}

int main(){
    vector<int> arr={ 1, 2, 8, 4, 9};
    int n=5, c=3;

    cout<<getDistance(arr, n, c);
    return 0;
}