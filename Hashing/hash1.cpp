#include<iostream>
using namespace std ;
int main() {
    int n ;
    cout << "Enter the size of the array you wan to make " ;
    cin >> n ;

    int arr[n] ;

    for (int i = 0 ; i < n ; i++){
        cout << "Enter the elements" ;
        cin >> arr[i] ;
    }
    
    int hash[n] = {0} ;
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]] += 1 ;
    } 



    int q ; 
    cout << "Enter how many number you want to search" ;
    cin >> q ;
    while(q--){
        int number ;
        cout<<"Enter the number you want to search" ;
        cin >> number ;

        cout <<"The number apper times  ---> "<< hash[number] << endl ;
    }
    return 0 ;
}