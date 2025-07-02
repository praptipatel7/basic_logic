//PATTERN-13
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1

#include<iostream>
using namespace std;

int main(){
    int N,space,num=1;
    cout<<"Enter value of N : ";
    cin>>N;
    for(int i=0 ; i<N ; i++){
        for(space=0;space<=N-i; space++){
            cout<<" ";
        }
        for(int j=0; j<=i ; j++){
            if(j==0 || i==0)
                num=1;
            else
                num=num*(i-j+1)/j;
                cout<<" "<<num;

        }
        cout<<endl;
    }
    return 0;

}