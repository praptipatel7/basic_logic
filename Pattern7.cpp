//PATTERN-7
//    *
//   ***
//  *****
// *******

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the value of N : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i*2 -1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}