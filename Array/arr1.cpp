//=================================================================================
//Find smalles /largest number in array
#include<iostream>
#include <climits>

using namespace std;

int main(){
    int arr[5], n=5, small=INT_MAX, great=INT_MIN;

    cout<<"Enter 10 values for array: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
            if(small>arr[i]){
                small=arr[i];
            }
            if(great<arr[i]){
                great=arr[i];
            }
        
    }
    
    cout<<"smallest no. is: "<<small<<endl;
    cout<<"greatest no. is: "<<great;
    return 0;
}