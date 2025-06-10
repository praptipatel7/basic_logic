//=================================================================================
//Print all the unique values in the array
#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,1,2,4}, size=6;

    cout<<"Unique values are : "<<endl;

    for(int i=0 ; i<size ; i++){
        int count=0;

        for(int j=0 ; j<size ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if (count==1) {
            cout << arr[i] << "  "<<endl;
        }
    }
    return 0;
}