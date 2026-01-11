#include<iostream>
#include<vector>

using namespace std ;

int fn(vector<int> &arr , int index ){
    if(index == 0 ) return arr[index] ;
    if(index < 0 ) return 0 ;
    int take = arr[index] + fn(arr , index - 2 ) ;
    int notTake = fn(arr , index - 1 ) ;
    return max(take , notTake) ;
}

int house(vector<int> arr , int size ){
    vector<int> case1(arr.begin() , arr.end() -1 ) ;

    vector<int> case2(arr.begin() + 1 , arr.end()) ;

    int ans1 = fn(case1 , case1.size() -1 ) ;
    int ans2 = fn(case2 , case2.size() -1 ) ;
    return max(ans1 , ans2) ;
}
int main(){}