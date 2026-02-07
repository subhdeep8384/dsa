#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int largestSubarray(vector<int> &arr , int sum ){
    int length  = 0 ;
    int size = arr.size() ;
    for(int i = 0 ; i < size ; i++ ){
        for(int j = i ; j < size ; j++ ){
            int maxi = 0 ; 
            for(int k = i ; k <= j ; k++){
                maxi += arr[k] ;
            }
            if(maxi == sum ){
                length = max(length , j - i + 1);
            }
        }
    }
    return length ;
}
int largestSubarray1(vector<int> &arr , int sum ){
    int length = 0 ; 
    int size = arr.size() ;

    for(int i = 0 ; i < size ; i++){
        int maxi = 0 ;
        for(int j = i ; j < size ; j++ ){
            maxi += arr[j] ;
            if(maxi == sum ){
                length = max(length , j - i + 1 );
            }
        }
    }
    return length ;
}
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3} ;
    int ans = largestSubarray(arr , 3) ;
    cout << ans << endl ;
}