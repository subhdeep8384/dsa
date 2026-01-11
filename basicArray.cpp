#include<iostream>
using namespace std ;

int globalArr[10] ;
int main(){ 
    int arr[6] ;


    for(int i = 0 ; i < 6 ; i++){
        cout << arr[i] << " " ;
    }


    for(int i = 0 ; i < 10  ; i++){
        cout << globalArr[i] << " " ;
    }
    // the max size of the array we can define 10^6 
    // global 10^7 
    
}
