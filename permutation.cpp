#include<iostream>
#include<vector>

using namespace std ;



vector<vector<int>> printPermutations(vector<bool> &freq ,vector<int> &nums , vector<int> &ds , vector<vector<int>> &ans  ){
    if(ds.size() == nums.size() ){
        ans.push_back(ds) ;
        return ans ;
    }

   for(int i = 0 ; i < nums.size() ; i++ ){
    if(!freq[i]){
        freq[i] = true ;
        ds.push_back(nums[i]) ;
        printPermutations(freq , nums , ds, ans ) ;
        ds.pop_back() ;
        freq[i] = false ;
    }
   }
   return ans ;
}

int main() {

    vector<int> nums = {1 ,2, 3} ;
    vector<int>ds ;
    vector<vector<int>> ans ;
    vector<bool> freq(nums.size() , false ) ;
    printPermutations( freq  , nums , ds, ans );
    for(auto it : ans){
        for(auto i : it ){
            cout << i << "  " ;
        }
        cout << endl ;
    }
}