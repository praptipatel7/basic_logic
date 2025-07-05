//===========================================================
//Bubble Sort
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();
    for(int i=0 ; i<n-1 ;i++){
        bool swapping = false;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapping = true;
            }
        }
        if(!swapping){
            break;
        }
    }
    for(int val: arr){
        cout<<val<<"  ";
    }
    return 0;
}