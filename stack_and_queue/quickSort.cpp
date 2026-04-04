#include<iostream>
using namespace std ;


int partion(int arr[] , int start , int end ){
    int idx = start - 1;
    int pivot = arr[end] ;

    for(int i = start ; i < end ; i++ ){
        if(arr[i] < pivot ){
            idx ++ ;
            swap(arr[i] , arr[idx]);
        }
    } 
    idx ++ ;
    swap(arr[end] , arr[idx]);
    return idx ;
}   

void quickSort(int arr[] , int start , int end ){
    if(start >= end ) return ;
    int pivot = partion(arr , start , end ) ;
    quickSort(arr , start , pivot - 1 );
    quickSort(arr , pivot + 1 , end );
}

int main(){
    int arr[] = {1 , 12 , 32 , 49 , 5 , 611 , 79 , 8 , 19 , 130 , 0 , 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr , 0 , size - 1);
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
}