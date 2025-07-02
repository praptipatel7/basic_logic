//PATTERN-16
// 123454321
//  1234321
//   12321
//    121
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    //upper triangle
    for(int i=0 ; i<n ; i++){
        for(int s=0 ; s<=i-1 ; s++){
            cout<<" ";
        }
        for(int j=1 ; j<=n-i ; j++){
            cout<<j;
        }
        for(int k=n-i-1 ; k>=1 ; k--){
            cout<<k;
        }
        cout<<endl;
    }
    //lower triangle
    for(int i=n-2 ; i>=0 ; i--){
        for(int s=0 ; s<i ; s++ ){
            cout<<" ";
        }
        for(int j=1 ; j<=n-i ; j++){
            cout<<j;
        }
        for(int k=n-i-1 ; k>=1 ; k--){
            cout<<k;
        }
        cout<<endl;
    }

    return 0;
}