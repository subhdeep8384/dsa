#include<iostream>
#include<string>
using namespace std ;
void name(int n  , string nm ){
    if(n == 0 ){
        return ;
    }
    cout << nm << n << endl ;
    name(n -1  , nm);
}
int main() {
    name(5 , "subhdeep");
    return 0 ;
}