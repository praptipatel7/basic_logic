#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> s = {'h','e','l','l','o'} ;
    int st=0, end=s.size()-1;
    while(st<end){
        swap(s[st++], s[end--]);
    }
    for(int i=0; i<s.size() ; i++){
        cout<<s[i]<<"  ";
    }
}
    