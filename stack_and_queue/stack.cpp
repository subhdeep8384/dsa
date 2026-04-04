#include<stack>
#include<iostream>
using namespace std ;




int main(){

    stack<int> s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.push(4);            
    

    stack<int> s2 = s ;
    while(!s2.empty() ){
        cout << s2.top() << " ";
        s2.pop() ;
    }
}