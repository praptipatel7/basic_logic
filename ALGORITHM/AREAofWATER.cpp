//=============================================================================================
//Brute force approach to find max water that can be stored in a container formed by heights
//of different walls given in vector 
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> height={1,8,6,2,5,4,8,3,7};
//     int maxWater=0;

//     for(int i=0 ; i<height.size() ; i++){
//         for(int j=i+1 ; j<height.size() ; j++){
//             int width=j-i;
//             int h=min(height[i], height[j]);
//             int currWater=width*h;

//             maxWater=max(maxWater , currWater);

//         }
//     }
//     cout<<maxWater<<" is the maximum water that can be stored. ";
//     return 0;
// }






//=============================================================================================
//better optimised 2-pointer approach   
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int maxWater=0;
    int lp=0 , rp=height.size() - 1;
    while(lp<rp){
        int width = rp-lp;
        int h = min(height[lp], height[rp]);
        int currWater = width*h;
        maxWater = max(maxWater , currWater);

        if(height[lp]<height[rp])   lp++;
        else   rp--;
    }
    cout<<maxWater<<" is the maximum water that can be stored. ";
    return 0;
}