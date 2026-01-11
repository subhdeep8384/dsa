#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


vector<vector<int>> printPermutations(int index , vector<int> &nums , vector<bool> &freq ,  vector<int> &ds , vector<vector<int>>&ans ){

    if(ds.size() == nums.size() ){
        ans.push_back(ds) ;
        return  ans ;
    }
    for(int i = 0 ; i < nums.size() ; i++ ){
        if(!freq[i]){
            freq[i] = true ;
            ds.push_back(nums[i]) ;
            printPermutations(i + 1 , nums , freq, ds, ans );
            ds.pop_back() ;
            freq[i] = false ;
        }
    }
    return ans ;
}



int main() {
    vector<int> nums = {1, 4 ,  2, 3 } ;
    vector<bool> freq(nums.size() , false ) ;
    vector<int> ds ;
    vector<vector<int>> ans ;

        printPermutations(0 , nums , freq , ds  ,ans ) ;
        sort(ans.begin() , ans.end()) ;

        for(auto it : ans ){
            for(auto i : it ) cout << i << " " ;
            cout << endl ;
        }
}