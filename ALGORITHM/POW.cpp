//==========================================================================================
//POW(X,Y) Power Exponential Problem
#include<iostream>
using namespace std;

int main(){
    double x, ans=1;
    long n;
    cout<<"Enter value of X (with atleast one decimal value) : "<<endl;
    cin>>x;
    cout<<"Enter value of N (with atleast one decimal value) : ";
    cin>>n;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(n == 0) return 1.0;
    if(x == -1 && n%2 == 0) return 1.0;
    if(x == -1 && n%2 == 1) return -1.0;

    if( n < 0 ){
        x=1/x;
        n= -n;
    }

    while( n>0){
        if(n % 2 ==1){
            ans*=x;
        }
        x*=x;
        n/=2;
    }
    cout<<ans;
    return 0;
}