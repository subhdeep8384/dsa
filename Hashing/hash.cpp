#include<iostream>
using namespace std ;

int countNumber(int number , int arr[]  ,int size) {
    int count = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == number ){
            count++ ;
        }
    }
    return count ;
} 
int main() {
    int number = 1 ;
    int arr[] = {1 ,1 ,1 ,2 ,4  ,5,1 ,1 ,1 , 1 } ;
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int count = countNumber(number , arr ,size);
    cout << count   << "   "  ;
}