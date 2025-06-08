//======================================================================
//Print a number in reverse order using recursion.
#include<iostream>
using namespace std;

void reverse(int n){
    if(n==0) return ;
    cout<<n%10;
    reverse(n/10);

}

int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Reverse of this number is :";
    reverse(num);
    return 0;

}