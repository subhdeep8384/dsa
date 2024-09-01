#include<iostream>
#include<vector>
using namespace std ;


vector<int> rotateWithOneIndex(vector<int> a , int size ){
    int temp = a[0] ;

    for(int i = 1 ; i < size ; i++){
        a[i-1] = a[i] ;
    }
    a[size-1] = temp ;

    return a ;
}
int main(){
    vector<int> a ={1,2,3,4,5} ;
    int size = 5 ;


    for(int i = 0 ; i < size ; i++){
        cout << a[i] << " " ;
    }


    cout<< "AFTER" << endl ;
    vector<int> b =  rotateWithOneIndex(a , 5 ) ;
    for(int i = 0 ; i < size ; i++){
        cout << b[i] << " " ;
    }
}