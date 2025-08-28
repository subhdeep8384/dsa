#include <bits/stdc++.h>
using namespace std;

int assignCookie(vector<int> child , vector<int> cookie){
    int n = child.size() ;
    int m = cookie.size() ;
    sort(cookie.begin() , cookie.end()) ;
    sort(child.begin() , child.end()) ;

    int i = 0 , j = 0 ;
    while(i < n && j < m ){
        if(child[i] <= cookie[j]){
            i++ ;
            j++ ;
        }
        else{
            j++ ;
        }
    }
    return i ;
}

int main(){
    vector<int> child = {1 , 5, 3, 3 , 4 } ;
    vector<int> cookie {4 , 2, 1, 2, 1, 3 } ;

    int ans = assignCookie(child , cookie) ;
    cout << ans  ;
}
