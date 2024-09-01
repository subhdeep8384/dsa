// this is done using map 


#include<map>
#include<iostream>
#include<vector>
using namespace std ;

vector<int> read(int n ,vector<int> book , int target ){
    map<int , int > mpp ;

    for(int i =0 ; i < n ; i++){
        int a = book[i] ;
        int more  = target - a ;

    if(mpp.find(more) != mpp.end() ){
        return {mpp[more] , i } ;
    }
    mpp[a] = i ;
    }
    return {-1 , -1 } ;
}
int main(){
    vector<int> book = {1,2,3,4,5,6} ;
    int size = 6 ; 
    int target = 9 ; 

    vector<int> ans = read(size , book , target ) ;
    for(int i = 0 ; i < 2 ; i++){
        cout << ans[i] << endl ;
    }

    cout <<book[ans[0]] << "+" << book[ans[1]] << "=" << target << endl;
}