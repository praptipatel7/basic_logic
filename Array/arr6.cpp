//=================================================================================
//Swap Max and Min numbers of array
#include<iostream>
using namespace std;

int main(){
    int arr[5],s=0 ,g=0;
    int size=5; 
    cout<<"Enter 5 values for array: ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
        if(arr[s]>arr[i]){
            s=i;
        }
        if(arr[g]<arr[i]){
            g=i;
        }
    }  

    swap(arr[s],arr[g]);
    for(int i=0 ; i<size ; i++) {
        cout<<arr[i]<<"    ";
    }
    return 0;
}