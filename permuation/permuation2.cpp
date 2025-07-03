#include<iostream>
#include<vector>

using namespace std ;

string getPermutations(int n  ,int k ){
    int fact = 1 ;
    vector<int> numbers ;
    for(int i = 1 ; i < n ; i++ ){
        fact =  fact * i ;
        numbers.push_back(i) ;
    }
    cout <<"Fact is "  <<  fact  << endl;
    numbers.push_back(n) ;
    string ans = "" ;
    k = k - 1 ;
    while(true ){
        ans = ans + to_string(numbers[k/fact]) ;
        numbers.erase(numbers.begin() + k / fact ) ;
        if(numbers.size() == 0 ){
            break; 
        }
        k = k % fact ;
        fact = fact /numbers.size() ;
    }
    return ans ;
}
int main(){
    string ans =  getPermutations(4 , 17) ;
    cout << ans ;
}