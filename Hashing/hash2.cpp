#include<iostream>
using namespace std ;


int f(char c , string s ){
    int count =  0 ; 

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == c){
            count++ ;
        }
    }
    return count ;
}

int main() {
    string name = "subhdeep  pal" ;
    char c = 's' ;

    int number = f(c , name) ;

    cout << number ;
    return 0 ;
}