//PATTERN-23
// 123
// 456
// 789
#include<iostream>
using namespace std;

int main(){
    int n;
    char num ='A';
    cout<<"enter value of n : ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}