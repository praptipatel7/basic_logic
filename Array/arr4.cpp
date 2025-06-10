//=================================================================================
//Reverse Array
//NORMAL APPROACH
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5,temp;
    cout<<"Before: "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=0 ; i<=size/2 ; i++){
        swap(arr[i],arr[size-1-i]);
    }

    cout<<"\nAfter: "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//2-POINTER APPROACH
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5}, size=5;
//     int start=0 , end=size-1;
//     cout<<"Before: "<<endl;
//     for(int i=0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }

//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     cout<<"\nAfter: "<<endl;
//     for(int i=0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }