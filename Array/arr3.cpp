//=================================================================================
//Pass by reference
#include<iostream>
using namespace std;

int changeArr(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        arr[i]*=2;
    }
    return 0;        
}

int main(){
    int arr[5]={1,2,3,4,5}, n=5;
    cout<<"Array in main: "<<endl;

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"    ";
    }

    changeArr(arr,n);
    cout<<"\nArray after change: "<<endl;

    for(int i=0 ; i<n ; i++) {
        cout<<arr[i]<<"    ";
    }
    return 0;
}