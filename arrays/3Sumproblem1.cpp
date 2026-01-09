#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std ; 

vector<vector<int>> triplets(int n , vector<int> &arr){
    
    set<vector<int>> st ;
    for(int i = 0 ; i < n ; i++ ){
        for(int j = i + 1 ; j < n ; j++ ){
            for(int k = i ; k < j ; k++ ){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int> temp = {arr[i] , arr[j] , arr[k]} ;
                    sort(temp.begin() , temp.end()) ;
                    st.insert(temp) ;
                }
                }
            }
        }
        vector<vector<int>> ans(st.begin() , st.end()) ;
        return ans ;
    }


int main() {
    vector<int >arr = {-1 , 0 , 1 , 2 , 1 , -5} ;
    vector<vector<int>> ans = triplets(arr.size() , arr ) ;

    for(auto i : ans){
        for(auto j : i){
            cout << j << " " ;
        }
        cout << endl ;
    }
}