#include<iostream>
#include<string>
using namespace std ;
// void name(int n  , string nm ){
//     if(n == 0 ){
//         return ;
//     }
//     cout << nm << n << endl ;
//     name(n -1  , nm);
// }

void print(int n , int lim  ){
    if(n > lim ){
        return ;
    }
    cout << n << endl ;
    print(n + 1 , lim ) ;
}
void reversePrint(int n , int lim ){
    if(lim < n ){
        return ;
    }
    cout << lim << endl ;
    reversePrint(n , lim - 1) ;
}

void revPrint(int i , int n ){
    if( i < 1 ){
        return ; 
    }
    revPrint(i -1 , n ) ;
    cout << i << endl ;
}
int main() {
    // name(500 , "subhdeep");
    // reversePrint(-11 , 10 );
    // reversePrint(3 , 3);
    revPrint(3 , 3);
    return 0 ;
}