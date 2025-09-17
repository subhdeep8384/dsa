#include<iostream>
#include<vector>
using namespace std ;

int ninja(vector<vector<int>> &days  , int lastTaskDone  , int index){
    // base case 
    if(index == 0  ){
        int maxi = INT16_MIN ;
        for(int i = 0 ; i < days[0].size() ; i++ ){
            if(i != lastTaskDone){
                maxi = max(maxi , days[0][i]);
            }
        }
        return maxi ;
    }    


}

int main(){}