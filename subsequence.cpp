
#include<iostream>
#include<vector>
using namespace std ;


void printSubsequence(int ind , vector<int> &ds , int arr[] , int n  ) {
    if(ind == n ) {for(auto it : ds ){cout << it << endl ;}
        cout << endl ;
        return ;
    }
    ds.push_back(arr[ind]) ;
    printSubsequence(ind + 1 , ds , arr, n );

    ds.pop_back() ;
    printSubsequence(ind + 1 , ds , arr, n ) ;
}
int main(){
    int arr[] = {3 , 1, 2 };
    int n = 3 ;
    vector<int>ds ;
    printSubsequence(0 , ds , arr , n ) ;
}