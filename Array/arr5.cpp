//=================================================================================
//Calculate sum and product of all number in array
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int size=5,sum=0,product=1; 
    cout<<"Enter 10 values for array: ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }  
    for(int i=0 ; i<size ; i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum of all the numbers = "<<sum<<endl;
    cout<<"Product of all the numbers = "<<product;
    return 0;
}