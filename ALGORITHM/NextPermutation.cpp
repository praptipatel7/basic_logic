//================================================================
//Next Permutation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> A = {1,2,3};
    int n = A.size();
    int piv = -1;
    for(int i=n-2 ; i>=0 ; i--){
        if(A[i]<A[i+1]){
            piv = i;
            break;
        }
    }
    if(piv == -1){
        reverse(A.begin(), A.end());

    }
        
    for(int i=n-1 ; i>piv ; i--){
        if(A[i]> A[piv]){
            swap(A[i], A[piv]);
            break;
        }
    }
    int i = piv+1, j = n-1 ;
    while(i<=j){
        swap(A[i++], A[j--]);
    }
    for(int i=0 ; i<n ; i++){
       cout<<A[i]<<"  ";
    }   
}
