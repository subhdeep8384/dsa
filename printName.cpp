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
int main() {
    // name(500 , "subhdeep");
    reversePrint(1 , 10 );
    return 0 ;
}