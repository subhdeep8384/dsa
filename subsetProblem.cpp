#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void subset( int index , vector<int> &arr , int sum  ,vector<int> &ans   ){
    
    
    if  ( index >=  arr.size() ){
        ans.push_back(sum) ;
    
        return ;
    }
    subset(index + 1 ,  arr , sum + arr[index] , ans) ;
    // ans.pop_back() ;
    subset(index + 1 , arr ,sum  , ans) ;

    // return ans ;
}


int main() {
    vector<int >arr = {3 ,1 , 2} ;
    vector<int> ans  ;
    subset(0 ,  arr , 0  , ans );

    for(auto it : ans ){
        cout << it << endl ;
    }
}