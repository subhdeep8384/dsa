#include<iostream>
#include<vector>
using namespace std ;

class Solution{
    public : 
bool isSafe(vector<string> &board , int row , int col , int n ){
    for(int i = 0 ; i < n ; i++){
        if( board[i][col] == 'Q' ){
            return false ;
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(board[row][i] == 'Q'){
            return false ;
        }
    }

    for(int i = row , j = col ; j >= 0 && i >= 0 ; i-- , j-- ){
        if(board[i][j] =='Q'){
            return false ;
        }
    }
    for(int i = row , j = col ; i >= 0 && j <= n ; i-- , j++  ){
        if(board[i][j] == 'Q'){
            return false ;
        }
    }
    return true ;
}
    void nQueen(vector<string>&board , int row , int n , vector<vector<string>>&ans ){
        if(row == n ){
            ans.push_back({board}) ;
            return ;
        }
        for(int i = 0 ; i < n ; i++){
            if(isSafe(board , row , i , n )){
                board[row][i] = 'Q' ;
                nQueen(board , row , n , ans ) ;
                board[row][i] = '.' ;
            }
        }
    }
    vector<vector<string>> solveNQueen(int n ){
        vector<string> board(n , string(n ,'.')) ;
        vector<vector<string>> ans ;
        nQueen(board , 0 , n , ans ) ;
        return ans ;
    }
};
int main() {
    Solution s;
    vector<vector<string>> result = s.solveNQueen(3);
    for (const auto& board : result) {
        for (const auto& row : board) {
            cout << row << endl;
        }
        cout << endl;
    }

}