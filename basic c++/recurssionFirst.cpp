#include<iostream>
using namespace std ;

string print(int n ) {
    if(n == 0 ){
        return "soorrry" ;
    }
    cout<<"subhdeep" ;
    print(--n) ;
}
int main () {
    print(12) ;
    return 0 ;
} 