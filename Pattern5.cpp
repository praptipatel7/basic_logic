//PATTERN-5
// *****
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;

int main(){
    int n,space;
    cout<<"enter number of rows : ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int k=0 ; k<=i  ; k++){
            cout<<" ";
        }
        for(int j=1 ; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}