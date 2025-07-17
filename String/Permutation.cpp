#include<iostream>
using namespace std;

bool isFreqSame(int freq1[] , int freq2[]){
    for(int i=0 ; i<26 ; i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo"; 

    int freq[26] = {0};

    for(int i=0 ; i<s1.length() ; i++){
        freq[s1[i] - 'a']++;
    }

    int windSize=s1.length();
    for(int i=0 ; i<s2.length() ; i++){
        int windIdx=0 , idx=i;
        int windFreq[26] = {0};
        while(windIdx < windSize && idx<s2.length()){
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        if(isFreqSame(freq, windFreq)){    
            cout<<"true";
            return 0;
        }
    }
    return 0;
}