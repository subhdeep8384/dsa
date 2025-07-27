#include<iostream>
#include<vector>
using namespace std ;

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

int main(){
    vector<int> arr = {2 ,1 , 4, 9 } ;
    int size = arr.size() ;
    int ans = NonAdjacentMaxSum(size - 1 , arr) ;
    cout << ans  ;
}