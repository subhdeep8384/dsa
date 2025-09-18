#include<iostream>
#include<vector>
using namespace std ;
int fn(int i , int j , vector<vector<int>> &grid) {
    if(i == 0 && j == 0 ){
        return 1 ;
    }
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
        return 0 ;
    }

    if(i >= 0 && j >= 0 && grid[i][j] == -1 )return 0 ;
    int up = fn(i -1 , j , grid) ;
    int left = fn(i , j - 1 , grid);

    return up + left ;
}

int main() {

} 