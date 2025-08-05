#include<iostream>
#include<vector>
#include<list>
#include<set>
#include <algorithm>
#include <unordered_map>
using namespace std ;

vector<vector<int>> threeSumProblem(vector<int> &arr ){
    set<vector<int>> st ;
    for(int i = 0 ; i < arr.size() ; i++ ){
        set<int> hashSet ;
        for(int j = i + 1 ; j < arr.size() ; j++ ){
            int leftOverSum = -(arr[i] + arr[j]) ;
            if(hashSet.find(leftOverSum) != hashSet.end()){
                vector<int> temp = {arr[i] , arr[j] , leftOverSum} ;
                sort(temp.begin() , temp.end()) ;
                st.insert(temp) ;
            }
            hashSet.insert(arr[j]) ;
            }
        }
        vector<vector<int>> ans (st.begin() , st.end()) ;
        return ans ;
}


vector<vector<int>> triplets(vector<int> &arr){
    sort(arr.begin() , arr.end()) ;
    vector<vector<int>> ans ;
    for(int i = 0 ; i < arr.size() ; i++ ){
        if(i > 0 && arr[i] == arr[ i -1 ]) continue ;
        int j = i + 1 ;
        int k = arr.size() - 1 ;
        while(j <  k ){
            if(arr[i] + arr[j] + arr[k] < 0 ) j++ ;
            else if(arr[i] + arr[j] + arr[k] > 0 ) k-- ;

            else {
                vector<int> temp = {arr[i] , arr[j] , arr[k] } ;
                ans.push_back(temp) ;
                j++ , k-- ;
                while(j < k && arr[j] == arr[j - 1 ]) j++ ;
                while(j < k && arr[k] == arr[k + 1 ]) k-- ;
            }
        }
    }       
    
    return ans ;
}

int main() {
    vector<int> arr = {-1,0,0,0 ,1,2,-1,-4} ;    
    vector<vector<int>> ans = threeSumProblem(arr) ;
    vector<vector<int>> ans1 = triplets(arr) ;
    
    for(auto it : ans) {
        for(auto i : it ){
            cout << i << " " ; 
        }
        cout << endl ; 
    }

    cout << endl << endl ;
     for(auto it : ans1) {
        for(auto i : it ){
            cout << i << " " ; 
        }
        cout << endl ; 
    }
}