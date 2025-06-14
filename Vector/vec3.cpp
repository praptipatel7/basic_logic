//=====================================================================
//Reverse vector using function (pass by value and reference)
#include<iostream>
#include<vector>
using namespace std;

int reverseByValue(vector<int> vec , int n){
    int start=0,end=n-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    cout << "After Pass by Value : ";
    for (int val : vec)
        cout << val << " ";
    cout << endl;
    return 0;
}
int reverseByReference(vector<int>& vec ,int n){
    int start=0,end=n-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    cout << "After Pass by Reference : ";
    for (int val : vec)
        cout << val << " ";
    cout << endl;
    return 0;


}

int main(){
    vector<int> vec={1,2,3,4,5};
    int size=5;
    cout << "Original Vector: ";
    for (int val : vec)
        cout << val << " ";
    cout << endl<<endl;
     
    reverseByValue(vec, size);

    cout<<"Original vector after pass by value reversing: ";
    for (int val : vec)
        cout << val << " ";
    cout << endl<<endl;

    reverseByReference(vec ,size);

    cout<<"Original vector after pass by reference reversing: ";
    for (int val : vec)
        cout << val << " ";
    cout << endl;

    return 0;
}