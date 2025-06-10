//=================================================================================
//Linear search
#include<iostream>
using namespace std;

int findinx(int arr[], int n , int value){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==value){
            cout<<"value found at index : ";
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={2,5,-6,7,10};
    int value,n=5;
    cout<<"Enter Value you want to find index for: ";
    cin>>value;

    cout<<findinx(arr ,n,value);
    return 0;
}