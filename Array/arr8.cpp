//=================================================================================
//Print intersection of two array
#include<iostream>
using namespace std;

int main(){
    int arr1[5]={1,2,3,4,5},size1=5;
    int arr2[3]={4,5,6},size2=3;
    cout<<"Elements present in both array are : "<<endl;
    for(int i=0 ; i<size1 ; i++){
        for(int j=0 ; j<size2 ; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<endl;
            }
        }
    }
    return 0;
}