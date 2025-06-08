//====================================================================
//Find the greatest common divisor (GCD) of two numbers .
#include<iostream>
using namespace std;

int main(){
    int a,b,q,r;
    cout<<"Enter the value of A and B: "<<endl;
    cin>>a>>b;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while(b!=0){
    q=a / b;
    r=a % b;
    a=b;
    b=r;
    }
    cout<<a;
}