#include<iostream>
#include<vector>
using namespace std ;
// in this we cannot take adjacent house and also we cannot take 1st and the last house togerther as they are adjacent 
int NonAdjacentMaxSum(
    int index ,
    vector<int> &arr 
){
    if(index == 0 ) return arr[index] ;
    if(index < 0 ) return 0 ;
    int take = arr[index] + NonAdjacentMaxSum(index - 2 , arr) ;
    int notTake = NonAdjacentMaxSum(index - 1 , arr );

    return max(take , notTake) ;
}
int house(int index , vector<int>&arr ){

    if(arr.size() == 1 ){
        return arr[0] ;
    }
    vector <int> case1(arr.begin() , arr.end() - 1 ) ;
    vector<int> case2(arr.begin() + 1 , arr.end() ) ;

    int ans1 = NonAdjacentMaxSum(case1.size() - 1 , case1 ) ;
    int ans2 = NonAdjacentMaxSum(case2.size() - 1, case2 ) ;
    return max(ans1 , ans2 ) ;
}


int main(){
    vector<int> arr = {12 , 1, 2 , 3 ,12 } ;
    int ans = house(3  , arr ) ;
    cout << ans  ;
}