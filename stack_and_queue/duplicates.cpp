#include<iostream>
using namespace std ;


int removeDuplicates(int arr[] , int size ){
    int idx = 0 ; 
    for(int i = 1 ; i < size ; i++ ){
        if(arr[i] != arr[idx]){
            idx++ ;
            arr[idx] = arr[i];
        }
    }
    return idx + 1;
}
int main(){
    int arr[] = {1 ,1 ,1, 1, 1, 1, 1, 2, 2, 2,2 , 2, 2 , 3, 3, 4, 5, 6, 6, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);


    int newSize = removeDuplicates(arr , size );


    for(int i = 0 ; i < newSize ; i++ ){
        cout << arr[i] << " ";
    }
}