//===========================================================
//Insertion Sort
#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    for(int i=1 ; i<n ; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        } 
        arr[prev+1]=curr;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
}