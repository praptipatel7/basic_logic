//=====================================================================
//Linear search in vector
#include<iostream>
#include<vector>
using namespace std;

int findidx(vector<int> vec,int size,int  value){
    for(int i=0 ; i<size ; i++){
        if(vec[i]==value)
        return i;
    }
    return -1;
}

int main(){
    vector<int> vec={1,3,5,-3,0};
    int value,size=5;
    
    cout<<"Enter value to find index number : ";
    cin>>value;


    cout<<findidx(vec, size , value);
    return 0;
}