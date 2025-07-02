//==================================================================
//Search in Rotated Sorted array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={4,5,6,7,0,1,2};
    int target = 0;
    int start=0, end=nums.size()-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            cout<<mid;
            return 0;
        }
        if(nums[start]<=nums[mid]){//left sorted
            if(nums[start]<= target && target<=nums[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        else{//right sorted
            if(nums[mid]<= target && target<=nums[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return 0;    
}