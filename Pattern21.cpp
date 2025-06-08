//PATTERN-21
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
#include<iostream>
using namespace std;

int main(){
    int n, num;
    cout<<"enter the value of n(odd number) : ";
    cin>>num;
    n=(num-1)/2;
    for(int i=0 ; i<n ; i++){
        for(int j=1 ; j<=i+1 ; j++){
            cout<<"*";
        }
        for(int s=1 ; s<=((n-i)*2)-1 ; s++){
            cout<<" ";
        }
        for(int j=0 ; j<i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0 ; i<n*2+1 ;i++) cout<<"*";
    cout<<endl;
    for(int i=n-1 ; i>=0 ; i--){
        for(int j=i+1 ; j>=1 ; j--){
            cout<<"*";
        }
        for(int s=1 ; s<=((n-i)*2)-1 ; s++){
            cout<<" ";
        }
        for(int j=i ; j>=0 ;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}