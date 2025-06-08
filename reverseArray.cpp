#include<iostream>
using namespace std ;
int * reverseArray(int arr[] , int size ){
    int newArr[] = {} ;
    int i = 0 , j = size - 1 ;
    int temp ;
    while(i < j ){
        temp = arr[i] ;
        arr[i] = arr[j];
        arr[j] = temp ;
        i++ , j-- ;
    }
    return arr ;
} 
int main() {
    int arr[] = {1 ,2 ,3 ,4 ,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int * newArr =  reverseArray(arr , size ) ;

    for(int i = 0 ; i < size ; i++){
        cout << newArr[i] << "  " ;
    }
}