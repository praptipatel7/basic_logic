//=====================================================================
//Selection Sort
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    for(int i=0 ; i<n-1 ; i++){
        int minIndex=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
    
    return 0; 
}