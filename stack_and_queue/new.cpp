#include<iostream>
#include<vector>
using namespace std ;


template<typename T>
class Stack {
    vector<T> v ;
    int topp = -1 ;
    public :
    void push(T v ){
        this -> v.push_back(v);
        topp ++ ;
    }
    void pop(){
        this -> v.pop_back();
        topp-- ;
    }
    T top() {
        return v[v.size() - 1 ];
    } 

    bool isEmpty(){
        return topp == -1 ;
    }
    void display(){
        for(auto it : v ){
            cout << it << " ";
        }
        cout << endl ;
    }
};

int main(){
    Stack<char>s ;
    s.push('a');
    s.push('b');
    s.push('c');
    s.display();
    s.pop();
    s.display();
}