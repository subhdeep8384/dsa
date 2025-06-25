#include<iostream>
#include<vector>
#include<algorithm>
#include<Set>
using namespace std ;

void subset( int index , vector<int> &arr , int sum  ,set<int> &s    ){
    
    
    if  ( index >=  arr.size() ){
        s.insert(sum) ;
        
        return ;
    }
    subset(index + 1 ,  arr , sum + arr[index] , s) ;
    // ans.pop_back() ;
    subset(index + 1 , arr ,sum  , s) ;

    // return ans ;
}


int main() {
    vector<int >arr = {3 ,1 , 2} ;
    set<int> s  ;
    subset(0 ,  arr , 0  , s );

    for(auto it : s ){
        cout << it << endl ;
    }
}