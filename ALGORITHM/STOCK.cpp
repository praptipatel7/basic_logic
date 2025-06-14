//=====================================================================================
//best time to buy and sell stock
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> prices ={7,1,5,3,6,4};
    int maxProfit=0 , bestBuy = prices[0];

    for(int i=0 ; i<prices.size() ;i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy=min(bestBuy , prices[i]);
    }
    cout<<"We get profit of : "<<maxProfit;
    return 0;
}