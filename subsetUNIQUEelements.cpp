#include <iostream>
#include<algorithm>
#include<vector>
using namespace std ;


void  function(int index , vector<int> &ds, vector<int> &nums, vector<vector<int>>&ans ){   ans.push_back(ds) ;

for(int i = index ; i < nums.size() ; i++ ){
    if(i != index && nums[i] == nums[ i -1 ] )continue; 

    ds.push_back(nums[i]) ;
    function(i + 1 , ds, nums , ans ) ;
    ds.pop_back() ;
}

} 

vector<vector<int>> subset(vector<int> &nums){
    vector<vector<int>> ans ;
    vector<int> ds ;
    sort(nums.begin() , nums.end()) ;

    function(0 , ds , nums, ans ) ;
    for(auto it : ans ){
        for(auto i : it ){
            cout << i << " ";
        }
        cout << endl; 
    }
    return ans ;

 }

int main () {
    vector<int > nums = {1, 2,2, 2 , 3, 3 };
    subset(nums) ;
}