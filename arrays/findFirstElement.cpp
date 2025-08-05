#include<iostream>
#include<vector>
using namespace std ;

int findMissingNumber(vector<int> &arr){
    int size = arr.size() ;

    for(int i = 1 ; i <= size ; i++ ){
        if(arr[i-1] != i ){
            return i ;
        }
        else{} 
    }
}

int findMissingNumber1(vector<int> &arr) {
    int size = arr.size() ; 
    for(int i = 1 ; i <= size ; i++ ){
        int flag = 0 ;
        for(int j = 0 ; j < size ; j++ ){
            if(arr[j] == i ){
                flag = 1;
                break; 
            }
        }
        if(flag == 0 ){
            return i ;
        }
    }
}


int main() {
    vector<int>arr = {1 ,2, 3 , 5, 6 } ;
    int ans = findMissingNumber(arr) ;
    cout << ans  << endl  ;

    int ans1 = findMissingNumber1(arr) ;
    cout << ans1 ;
}