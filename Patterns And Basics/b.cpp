//====================================================================
//Check if a number is a palindrome.
#include<iostream>
using namespace std;

int main(){
    string num;
    cout<<"ENTER A INT :"<<endl;
    cin>>num;
    int pali=1;
    int len=num.length();
    for(int i=0;i<len/2;i++){
        if(num[i]!=num[len-1-i]){
        pali=0;
        break;
        }
    }
    if (pali == 1) {
        cout << "YES, THE NUMBER IS A PALINDROME";
    } 
    else {
        cout << "NO! TRY AGAIN!";
    }
    return 0;
}