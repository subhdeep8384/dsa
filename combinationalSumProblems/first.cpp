#include<iostream>
#include<vector>
using namespace std ;

vector<vector<int>> function1(int ind , vector<int> &ds , vector<int> &arr , int target , vector<vector<int>> &ans ){
    if(ind == arr.size() ){
        if(target == 0 ){
            ans.push_back(ds) ;
        }
        return ans ;
    }

    if(arr[ind] <= target ){
        ds.push_back(arr[ind]) ;
        function1(ind , ds , arr ,  target - arr[ind] , ans );
        ds.pop_back() ;
    }
    function1(ind + 1 , ds , arr , target , ans   ) ;
    return ans ;
 }

int main(){

    vector<int>ds ;
    vector<int>arr = {1 , 1 , 1 ,2  , 2 };
    vector<vector<int>> ans ;

    vector<vector<int>> ansss =  function1(0 , ds , arr , 4, ans );
    for (auto it : ansss){
        for(auto ii : it ){
            cout << ii << "  ";
        }
        cout << endl ;
    }
}