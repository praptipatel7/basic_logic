//PATTERN-14
//     *    
//    * *   
//   *   *  
//  *     * 
// *********

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    for(int i=0 ; i<=n ; i++){
        for(int s=1 ; s<=n-i ;s++){
            cout<<" ";
        }
        for(int j=1 ; j<=i*2-1 ;j++){
            if(j==1 || i==n || j==i*2-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0; 
}