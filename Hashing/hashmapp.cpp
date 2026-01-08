#include<iostream>
#include<map>
#include<unordered_map>
using namespace std ;

int main (){
    int n ; 
    cout << "Enter the number of elements : " ;
    cin >> n ; 
    int arr[n] ;
    cout << "Enter the elements : " ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }

    // precompute 
    unordered_map<int , int > m ; 
    for(int i = 0 ; i < n ; i++ ){
        m[arr[i]]++ ;
    }

    for(auto it : m ){
        cout << it.first << "->"<< it.second << endl ; 
    }
    int q ; 
    cin >> q  ;
    cout << "Enter the queries : " ;
    while (q-- ){
        int number ; 
        cin >> number ;
        cout << m[number] << endl ;
    }
    return 0 ; 
}