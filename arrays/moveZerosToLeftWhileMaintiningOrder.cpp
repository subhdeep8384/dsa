#include<vector>
#include<iostream>
using namespace std ;

void moveZerosToLeft(vector<int>&nums , int size){
    int j = size  - 2 ;
    for(int i = size - 1 ; i >= 0 ; i--){
        if(nums[i] != 0 &&  nums[j] != 0 ){
            i-- , j-- ;
        }
        else if(nums[i] == 0  && nums[j] == 0 ){
            i-- ; j-- ;
        }
        else if(nums[i] == 0 && nums[j] != 0 ){
            swap(nums[i] , nums[j]) ;
            i-- , j-- ;
        }
    }   
}

int main () {
    vector<int> v = { 1,0,2,3,2,0,0,4,5,1} ;

    moveZerosToLeft(v , v.size()) ;
    for(auto i : v ){
        cout << i << " " ;
    }
}