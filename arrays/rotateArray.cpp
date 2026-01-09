#include<iostream>
#include<vector>
using namespace std ;

void rotateArrayTwo(int n, char d, int r, vector < int > & num) {
    // Write your code here.
    if(d == 'f'){
        int size = n ;
        int rotate = r % size ;
        if(rotate == 0 ) return  ;
        vector<int> arr(num.end() - rotate , num.end()) ;

        for(int i = n - rotate -1  ; i >=0 ; i--){
            num[i + rotate ] = num[i] ;
        }

        for(int i = 0 ; i < rotate ; i++ ){
            num[i] = arr[i] ;
        }
    }
    if(d == 'b'){
        int size = n ;
        int rotate = r % size ;

        vector<int> arr(num.begin() , num.begin() + rotate) ;
        for (int i = rotate ; i < n ; i++ ){
            num[ i - rotate ] =  num[i] ;
        }

        for(int i = 0 ; i < rotate ; i++ ){
            num[n - rotate + i ] = arr[i] ;
        }

    }
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    rotateArrayTwo(10 , 'b' , 3, v ) ;

    for(auto i : v ){
        cout << i << " " ;
    }
}