//PATTERN-3
//     *
//    **
//   ***
//  ****
// *****

#include<iostream>
using namespace std;

int main(){
    int n,space;
    cout<<"enter number of rows : ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for (int k=n-i ;k>=0 ; k--){
            cout<<" ";
        }
        for(int j=0 ; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}