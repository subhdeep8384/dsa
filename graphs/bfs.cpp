#include<iostream>
#include<vector>
#include<queue>
using namespace std ;
vector<int> bfs(vector<vector<int>> &adj){
    int v = adj.size() ; // isme 5 aagya 

    int s = 2 ; // source 0 ho gya 

    vector<int> res ;

    queue<int> q ;

    vector<bool> visited(v , false ) ;// 4 size jisme sab false 
    visited[s] = true ;
    q.push(s); 

    while(!q.empty()){
        int current = q.front() ; //isme 0 aajayega 
        q.pop() ; 

        res.push_back(current) ; 

        for(int it : adj[current]){
            if(!visited[it]){
                visited[it] = true ;
                q.push(it) ;
            }
        }
    }
    return res ;
}
int main() {
     vector<vector<int>> adj = {
        {1, 2},
        {0, 2, 3},
        {0, 1, 4},
        {1, 4},
        {2, 3}
    };


    vector<int> ans = bfs(adj) ;
    for(auto it : ans ){
       cout << it <<  " " ;
    }
}