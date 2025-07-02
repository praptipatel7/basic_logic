//PATTERN-15
//    1
//   1 2
//  1   3
// 1     4
//  1   3
//   1 2
//    1
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
        for(int i=1 ; i<=n/2 +1 ; i++){
            for(int s=1; s<=n/2+1-i; s++){
                cout<<" ";
            }
            for(int k=1; k<=i*2 -1; k++){
                if(k==1){
                    cout<<" 1";
                }
                if(k==2*i-1 && i>1){
                    cout<<i;
                }

                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }

        for(int i=n/2 ; i>=1 ; i--){
            for(int s=1; s<=n/2+1-i; s++){
                cout<<" ";
            }
            for(int k=1; k<=i*2 -1; k++){
                if(k==1){
                    cout<<" 1";
                }
                if(k==2*i-1 && i!=1){
                    cout<<i;
                }
                else{
                    cout<<" ";
                }
                
            }
            cout<<endl;
        }
        return 0;
 }