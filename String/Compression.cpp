#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> chars= {'a','a','b','b','c','c','c'};
    int n = chars.size();
    int idx=0;
    for(int i=0 ; i<n;i++){
        int count=0;
        char ch=chars[i];
        while(i<n && chars[i]==ch){
            i++;count++;
        }
        if(count==1) chars[idx++]=ch;
        else {
            chars[idx++]=ch;
            string str = to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    for(char abc:chars){
        cout<<abc<<"  ";
    }
    return 0;        
}