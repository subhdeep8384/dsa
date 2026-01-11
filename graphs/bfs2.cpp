#include<iostream>
#include<vector>
#include<queue>
using namespace std ;

vector<int> bfs(vector<vector<int>> &adj){
    int v = adj.size() ;

    int s = 0 ; 

    vector<int> res ;

    queue<int>  q ;

    vector<bool> visited(v , false ) ;

    visited[s] = true ;

    q.push(s) ;
    while(!q.empty() ){
        int curr = q.front() ;
        q.pop() ;
        res.push_back(curr) ;
        for(int it : adj[curr]){
            if(!visited[it]) {
                visited[it] = true ;
                q.push(it) ;
            }
        }
    }
    return res ;
}


int main() {}