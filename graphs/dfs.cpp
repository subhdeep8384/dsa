#include<iostream>
#include<vector>
#include<stack>
using namespace std ;


vector<int> dfs(vector<vector<int>> &adj){
    int v = adj.size() ;

    int s = 1 ; 

    vector<int> res ;
    stack<int> q ;

    vector<bool> visited(v ,false) ;

    visited[s] = true ;
    q.push(s) ;

    while (!q.empty()){
        int curr = q.top() ;
        q.pop() ;

        res.push_back(curr) ;

        for(auto it : adj[curr]){
            if(!visited[it]){
                visited[it] = true ;
                q.push(it) ;
            }
        }
       
    }
  
     return res ;
} 
int main() {    vector<vector<int>> adj = {
        {},
        {2,3},
        {1 , 5, 6},
        {1 , 4, 7},
        {3 , 8 },
        {2},
        {2} ,
        {3, 8 },
        {4,7} ,
    };


    vector<int> ans = dfs(adj) ;
    for(auto it : ans ){
       cout << it <<  " " ;
    }}