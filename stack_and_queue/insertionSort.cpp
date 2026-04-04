#include<iostream>
#include<list>

#include<queue>
#include<deque>
using namespace std ;
class Node {
    public :
        int data ;
        Node * next ;

        Node(int data ){
            this -> data = data ;
            next = NULL ;
        }
};



// class Queue {
//     Node * head ;
//     Node * tail ;
//     public :
//     Queue(){
//         head = NULL ;
//         tail = NULL ;
//     }

//     void push(int data ){
//         Node * newNode = new Node(data );
//         if(head == NULL){
//             head = newNode ;
//             tail = newNode ;
//         }else{  
//             tail -> next = newNode ;
//             tail = newNode ;
//         }
//     }

//     void pop(){
//         if(head == NULL ){
//             cout << "Queue is empty" << endl ;
//             return ;
//         }else{
//             Node * temp = head ;
//             head = head -> next ;
//             delete temp ;
//         }
//     }


//     int front(){
//         if(head == NULL ){
//             cout << "Queue is empty" << endl ;
//             return -1 ;
//         }
//         else{
//             return head -> data ;
//         }
//     }

//     bool empty(){
//         return head == NULL ;
//     }
// };

int main(){
   
   deque<int> d ;
   d.push_back(1);
   d.push_back(2);
   d.push_back(3);
   d.push_front(4);
   int front = d.front() ;
   int back = d.back() ;

   cout << front << " " << back << endl ;
   d.pop_back();
   cout << d.front() << " " << d.back() << endl ;
}