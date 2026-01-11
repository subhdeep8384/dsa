#include<iostream>
#include<vector>
#include<queue>
using namespace std ;

void dfs(int node , vector<int> adj[] , int vis[] , vector<int> &ls){
    vis[node] = 1 ;
    ls.push_back(node) ;

    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it , adj , vis , ls ) ;
        }
    }
}

vector<int> DFSifgraph(vector<int> adj[] , int n){
   
    int vis[n] = {0} ;
    int start = 0 ;
    vector<int> ls ; 
    dfs(start , adj , vis , ls );

    for(auto it : ls ){
        cout << it << " ";
    }
}
int main(){
    vector<vector<int>> adj = {
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
    
}