#include <bits/stdc++.h>
#include<vector>
using namespace std ;
void moveZerosEnd(vector<int>&nums , int size){ 
    int i = 0 ;
    for (int j = 0 ; j < size ; j++ ){
        if(nums[j] != 0){
            swap(nums[i] , nums[j]) ;
            i++ ;
        }
    }
}

void moveZerosLeft(vector<int>&nums , int size){
    int i = 0 ; 
    for (int j = 0 ; j < size ; j++ ){
        if(nums[j] == 0 ){
            swap(nums[i] , nums[j]) ;
            i++ ;
        }
    }
}
int main(){
    vector<int> v = {0, 0 , 2, 3, 2, 0 , 0 ,4, 5, 1} ;
    int size = v.size() ;

    moveZerosLeft(v , size) ;
    for(auto i : v ){
        cout << i << " " ;
    }
}