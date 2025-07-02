//PATTERN-24
//1
//22
//333
//4444
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}