#include<iostream>
#include<vector>
using namespace std ;

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size() ;
    int temp[k] ;
    k = k % n ; 
    for(int i = 0 ;i < k ;i++){
        temp[i] = arr[i] ;
    }

    for(int i = k ; i < n ; i++){
        arr[i-k] = arr[i] ;
    }

    for(int i = n - k  ; i < n ; i++){
        arr[i]  = temp[ i - (n - k )] ;
    }
    return  arr ;
}
int main(){
    vector<int> a = {1,2,3,4,5} ;

    for(int i = 0 ; i < 5 ; i++){
        cout << a[i] << " " ;
    }


    int k = 2 ;

    
    vector<int> b = rotateArray(a , k ) ;
    cout<< "AFTER" << endl ;
    for(int i = 0 ; i < 5 ; i++){
        cout<< b[i] << " " ;
    }
}