#include<iostream>
using namespace std ;


void merge(int arr[] , int start , int mid , int end ){
    int i = start , j = mid + 1 , k = end ;
    int *temp = new int[end +  1  ];
    int tempIdx = 0 ; 
    while(i <= mid && j <= end ){
        if(arr[i] <= arr[j]){
            temp[tempIdx++] = arr[i++];
        }else{
            temp[tempIdx++] = arr[j++];
        }
    }

    while(i <= mid ){
        temp[tempIdx++] = arr[i++];
    }
    while(j <= end ){
        temp[tempIdx++] = arr[j++];
    }

    for(int i = start ; i <= end ; i++ ){
        arr[i] = temp[i - start];
    }
}

void mergeSort(int arr[] , int start , int end ){
    if(start >= end ) return ;
    int mid =   start + (end - start) /2 ;
    mergeSort(arr , start , mid );
    mergeSort(arr , mid + 1 , end );
    merge(arr , start , mid , end );

}

int main(){
    int arr[] = {1 , 12 , 32 , 49 , 5 , 611 , 79 , 8 , 19 , 130 , 0 , 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr , 0 , size - 1);
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
}