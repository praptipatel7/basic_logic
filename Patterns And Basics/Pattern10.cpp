//PATTERN-10
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int num=1;
        for(int j=0 ; j<=i ; j++){
            cout<<num<<" ";
            num=num*(i-j)/(j+1);
            
        }
        cout<<endl;
    }
    return 0;
}