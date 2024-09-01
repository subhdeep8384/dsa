#include<iostream>
#include<vector>
using namespace std ;
bool isSorted(int n , vector<int> &a ){
    for(int i = 1 ; i < n ; i++){
        if(a[i] >= a[i -1]){

        } 
        else{
            return false ;
        }
        
    }

    return true ;
}
int main(){


    vector<int> a = {1,2,30,5,6,7} ;
    int size = 7 ;
    cout << isSorted(size , a ) ;
}