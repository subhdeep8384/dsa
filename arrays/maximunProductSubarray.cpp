#include<iostream>
#include<vector>

using namespace std ;
int maximunProduct(vector<int> &arr){
    int n = arr.size() ;
    int maximum = INT32_MIN ;

    for(int i = 0 ; i < n ; i++ ){
        for(int j = i ; j <= n ; j++){
            int prod = 1 ; 
            for(int k = i ; k < j ; k++){
                prod = prod * arr[k] ;
            }
            maximum = max(prod , maximum) ;
        }
    }
    return maximum ;
}

int maxProduct(vector<int> &arr){
    int n = arr.size() ;
    int maxi = INT16_MIN ;
    for(int i = 0 ; i < n ; i++ ){
        int prod = 1 ;
        for(int j = i ; j <  n ; j++ ){
            prod = prod * arr[j] ;
            maxi = max(maxi , prod ) ;
        }
    }
    return maxi ; 
}

int maxProductOptimalSolution(vector<int>&arr){
    int n = arr.size() ;

    int prefix = 1 , suffix = 1 ;
    int maxi = INT16_MIN ;
    for(int i = 0 ; i < n ; i++ ){
        if(prefix == 0 ){prefix = 1 ;}
        if(suffix == 0 ){suffix = 1 ;}

        prefix = prefix * arr[i] ;
        suffix = suffix * arr[n - i - 1] ;
        maxi = max(maxi , max(prefix , suffix )) ;
    }
    return maxi ;
}
int main(){
    vector<int> arr = { -2 , -30, 12 , 0 , 4 , 1200 } ;
    int ans = maximunProduct(arr) ;
    cout << ans ;
    int ans1 = maxProduct(arr) ;
    cout << endl << ans1 << endl ;

    cout << maxProductOptimalSolution(arr) ;
}