#include<iostream>
using namespace std ;



class CircularQueue{
    int * arr ;
    int front , rear , size , currSize ;

    public :
    CircularQueue(int size ){
        arr = new int[size] ;
        this -> size = size ;
        front = 0 ;
        rear = -1 ;
    }

    void push(int data){
        if(currSize == size){
            cout << "Overflow" << endl ;
            return ;
        }
        else{
            rear = (rear + 1 ) % size ;
            arr[rear] = data ;
            currSize ++ ;
        }
    }
    void pop(){
        if(empty()){
            cout << "Underflow" << endl ;
            return ;
        }else{
            front = (front + 1)% size ;
            currSize -- ;
        }
    }
    int frontel(){
        if(empty()){
            cout << "Underflow" << endl ;
            return -1 ;
        } 
    }


    bool empty(){
        return currSize == 0 ;
    }
};

int main(){

}