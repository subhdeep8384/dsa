#include<iostream>
using namespace std ;
int main(){
    int arr[] = {1,2,3,4,5,5,6,6,7,7,8};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int max = arr[0] ;

    for(int i = 1 ; i < size ; i++){
        if(arr[i] > max ){
            max = arr[i] ;
  
        }
    }
   
   cout<< "the highest value is : "<< max ;

}