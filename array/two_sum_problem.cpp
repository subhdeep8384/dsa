// this is brute force 

#include<iostream>
#include<vector>
using namespace std ;


int sumoftwo(int arr[] , int target , int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if( arr[i] == arr[j] ) {continue ;} 
            else{
                if( (arr[i] + arr[j]) == target ){
                    cout<< arr[i] << "+" << arr[j] << "=" << arr[i] + arr[j]  << endl;
                    return 1 ;
                }
            }  
        }
    }
    return -1 ;
}
int main(){
    int arr[] = {1,2,3,4,5,6} ;
    int target = 5 ; 
    int size = 6 ;

    int a = sumoftwo(arr , target , size ) ;
    cout << a ;
}