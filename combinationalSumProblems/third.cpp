// COMBINATIONAL sUM 2 
#include <iostream>
#include<vector>
using namespace std ;

vector<vector<int>> combinationalSum2(int ind , int target , vector<int> &arr , vector<int> &ds , vector<vector<int>>&ans ){
     if(ind == arr.size() ){
        if(target == 0 ){
            ans.push_back(ds) ;
        }
        return ans ;
     }

     if(ind <= arr.size() ){
        ds.push_back(arr[ind]);
        combinationalSum2(ind + 1 , target - arr[ind] , arr , ds , ans ) ;
        ds.pop_back() ;
     }
     combinationalSum2(ind + 1 , target , arr , ds , ans ) ;
     return ans ;
}

int main() {
        vector<int>arr = {2 , 6,7 , 4 , 10} ;
    int target = 10;
    vector<int> ds ;
    vector<vector<int>> ans ;
    vector<vector<int>> a = combinationalSum2(0 ,  target , arr , ds , ans );
    for(auto it : a){
        for(auto i : it ){
            cout << i << "  ";
        }
        cout << endl ;
    }
}