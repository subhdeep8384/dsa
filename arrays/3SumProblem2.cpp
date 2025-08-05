#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std ;

vector<vector<int >> triplets(int size , vector<int > &arr ){
    set<vector<int>> st ;

    for(int i = 0 ; i < size ; i++ ){
        for(int j =  i + 1 ; j < size ; j++ ){
            for(int k = i ; k < j ; k++ ){
                if(arr[i] + arr[j] + arr[k] == 0 ){
                    vector<int> temp =  {arr[i] , arr[j] , arr[k] } ;
                    sort(temp.begin() , temp.end()) ;
                    st.insert(temp) ;
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin() , st.end() ) ;
    return ans  ; 
}

int main(){}