#include<iostream>
#include<list>
using namespace std ;


class Stack{
list<int> ll ;

public :
void push(int v ){
    ll.push_front(v);
}

int top(){
    return ll.front() ;
}

void pop(){
    ll.pop_front();
}

bool isEmpty(){
    return ll.size() == 0 ;
}

void display(){
    for(auto it : ll){
        cout << it << " " ;
    }
}
};



int main(){
    Stack s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
}