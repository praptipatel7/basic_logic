//=================================================================
//Robot moves using L(left), R(right), U(up), D(down) calculate if
// the displacement is zero. 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string moves="RL";
    int x=0, y=0 ;
    for(int i=0 ; i<=moves.length() ; i++){
        if(moves[i]=='U'){
            y++;
        }
        else if(moves[i]=='D'){
            y--;
        }
        else if(moves[i]=='L'){
            x--;
        }
        else if(moves[i]=='R'){
            x++;
        }
    }
    if(x==0 && y==0){
        cout<<"Yay !! the robot is back to the place.";
    }else{
        cout<<"Oh No! Robot is not back yet.";
    }
    return 0;
}