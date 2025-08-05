#include<iostream>
#include<vector>
#include<list>
#include<set>
#include <algorithm>
using namespace std ;

list<list<int>> threeSumProblem(vector<int> &arr , list<list<int>> &ans , set<set<int>> &st){
    int size = arr.size() ;

    for(int i = 0 ; i < size ; i++ ){
        list<int> temp ;
        for(int j = i + 1 ; j < size ; j++ ){
            for(int k = i ; k < j ; k++ ){
                if(arr[i] + arr[j] + arr[k] == 0){
                    temp.push_back(arr[i]) ;
                    temp.push_back(arr[j]) ;
                    temp.push_back(arr[k]) ;
                    temp.sort() ;
                    st.insert(temp.begin() , temp.end());
                }
            }
        }
        return ans ;
    }
}
int main(){
    list<list<int>> ans ;
    set<set<int>>st ;
    vector<int> arr = {-1,0,1,2,-1,-4} ;
    ans = threeSumProblem(arr , ans , st  ) ;
    for(auto i : ans){
        for(auto j : i){
            cout << j << " " ;
        }
        cout << endl ;
    }
}