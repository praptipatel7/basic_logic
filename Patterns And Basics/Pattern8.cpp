//PATTERN-8
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the value of N : ";
    cin>>n;
    if(n%2!=0){
        for(int i=1 ; i<=n/2 +1 ; i++){
            for(int j=1; j<=n-i; j++){
                cout<<" ";
            }
            for(int k=1; k<=i*2 -1; k++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=n/2 ; i>=1 ; i--){

            for(int j=1; j<=n-i; j++){
                cout<<" ";
            }
            for(int k=1; k<=i*2 -1; k++){
                cout<<"*";
            }
            cout<<endl;

        }
    }
    else{
        cout<<"Invalid Input!!";
    }
    return 0;
}