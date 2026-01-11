#include<iostream>
#include<vector>
using namespace std ;


vector<vector<int>> combinationSum(int ind , vector<int> &ds , vector<int>&arr , int target , vector<vector<int>> &ans) {

    if(ind == arr.size()){
        if(target == 0 ){
            ans.push_back(ds);
        }
        return ans ;
    }

    if(arr[ind] <= target){
        ds.push_back(arr[ind]) ;
        combinationSum(ind , ds , arr ,target - arr[ind] , ans ) ;
        ds.pop_back();
    }
    combinationSum(ind + 1 , ds , arr , target , ans ) ;
    return ans ;

    // if(ans.size() == 0 ){
    //     cout << "NO" ;
    // }
}

int main() {
    vector<int>arr = {2,3,6,7 , 10} ;
    int target = 10;
    vector<int> ds ;
    vector<vector<int>> ans ;
    vector<vector<int>> a = combinationSum(0 ,  ds , arr , target , ans   );
    for(auto it : a){
        for(auto i : it ){
            cout << i << "  ";
        }
        cout << endl ;
    }
}