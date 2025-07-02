//PATTERN-26
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main(){
    int n, num=1;
    cout<<"enter value of n : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j>=1 ; j--){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }
    return 0;
}