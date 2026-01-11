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

void swap(int* arr, int left, int right) {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
}

int* reverseArrayRecurrsion(int arr[], int left, int right) {
    if (left >= right) {
        return arr;
    }

    swap(arr, left, right);  
    return reverseArrayRecurrsion(arr, left + 1, right - 1);  
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 2 , 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* newArr = reverseArrayRecurrsion(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << newArr[i] << "  ";
    }

    return 0;
}