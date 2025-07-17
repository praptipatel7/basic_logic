#include<iostream>
#include<cctype>
using namespace std;

bool isAlphaNum(char ch){
    if((ch>='0' && ch<='9') ||
        (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
    }
    return false;
}
int main(){
    bool isPelindrome = true;
    string s ="A man, a plan, a canal: Panama";
    int st=0 , end=s.length()-1;
    while(st<end){
        if(!isAlphaNum(s[st])){
            st++;continue;
        }if(!isAlphaNum(s[end])){
            end--;continue;
        }if(tolower(s[st])!=tolower(s[end])){
            isPelindrome=false;
            break;
        }
        st++;end--;
    }
    if(isPelindrome) cout<<"true";
    else cout<<"false";
}   