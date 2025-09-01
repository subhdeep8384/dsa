#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int stf(vector<int> process ){
    sort(process.begin(),process.end());
    int waitingTime = 0 ;
    for(int i = 0 ; i < process.size() ; i++ ){
        waitingTime += process[i] ;
    }
    return int( waitingTime / process.size() + 1 );
}

int main() {
    vector<int> process = {4 , 3, 7, 1, 2 } ;
    int avgWaitingTime = stf(process) ;
    cout << "Average waiting time is " << avgWaitingTime << endl ;
    return 0;   
}