#include<iostream>
#include<vector>
#include<list>
#include<set>
#include <algorithm>
#include <unordered_map>
using namespace std ;

vector<vector<int>> threeSumProblem(vector<int> &arr ){
    set<vector<int>> st ;
    for(int i = 0 ; i < arr.size() ; i++ ){
        set<int> hashSet ;
        for(int j = i + 1 ; j < arr.size() ; j++ ){
            int leftOverSum = -(arr[i] + arr[j]) ;
            if(hashSet.find(leftOverSum) != hashSet.end()){
                vector<int> temp = {arr[i] , arr[j] , leftOverSum} ;
                sort(temp.begin() , temp.end()) ;
                st.insert(temp) ;
            }
            hashSet.insert(arr[j]) ;
            }
        }
        vector<vector<int>> ans (st.begin() , st.end()) ;
        return ans ;
    }


int main() {
    vector<int> arr = {-1,0,1,2,-1,-4} ;    
    vector<vector<int>> ans = threeSumProblem(arr) ;

    for(auto it : ans) {
        for(auto i : it ){
            cout << i << " " ; 
        }
        cout << endl ; 
    }
}