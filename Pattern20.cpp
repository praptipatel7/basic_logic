//PATTERN-20
// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include<iostream>
using namespace std;

int main(){
    int num, n=0;
    cout<<"enter the value of n : ";
    cin>>num;
    for(int i=1 ; i<=num ;i++){
        for (int j=1 ; j<=i ; j++){
            if((i+j)%2 == 0){
                cout<<n+1<<" ";
            }
            else {
                cout<<n<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}