//=====================================================================
//Use of basic Functions of vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cout << "Enter value " << i+1 << ": ";
        cin >> val;
        vec.push_back(val);
    }

    //for each loop
    cout<<"Initial vector:  ";
    for(int val:vec){
        cout<<val<<"   ";
    }
    cout<<"\nSize of array = "<<vec.size()<<endl;
    cout<< "Capacity of array = "<<vec.capacity()<<endl;
    //add new element at the end 
    vec.push_back(66);
    cout<<"Vector after pushing new value: ";
    for(int val:vec){
        cout<<val<<"    ";
    }
    vec.pop_back();
    cout<<"\nVector after poping last value: ";
    for(int val:vec){
        cout<<val<<"    ";
    }
    cout<<"\nFirst value : "<<vec.front();
    cout<<"\nLast value : "<<vec.back();
    cout <<"\nValue at index no. 3: "<<vec.at(3);


}