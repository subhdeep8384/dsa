#include<iostream>
#include <algorithm>
#include<vector>
using namespace std ;

string read(int n , vector<int> book , int target  ){

    int left = 0 ; int right = n - 1  ;
    sort(book.begin() , book.end() ) ;

    while(left < right ){
        int sum = book[left] + book[right] ;
        if(sum == target ){
            return "YES" ;
        }
        else if(sum < target) left++ ;
        else right-- ;
    }
    return "NO" ;
}


 int main(){
    vector<int> book {1,2,3,4,5,6} ;
    int target = 5 ;
    int size = 6 ;

    string ans = read(size , book , target ) ;
    cout << ans  ;

 }