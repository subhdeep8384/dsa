#include<iostream>
#include<vector>
using namespace std ;

class Node {
    public :
    int data ;
    Node * left ;
    Node * right ;
    Node(int data ){
        this -> data = data ;
        left = NULL ;
        right = NULL ;
    }
};
Node * buildTree(vector<int> &preOrder) {
    static int idx = -1; 
    idx ++ ;
    if(idx >= preOrder.size( ) || preOrder[idx] == - 1) return NULL ;
    Node * root = new Node(preOrder[idx]);
    root -> left = buildTree(preOrder);
    root -> right = buildTree(preOrder);
    return root ;
}

void preOrder(Node * root ){
    if(root == NULL ) return ;
    cout << root -> data << " ";
    preOrder(root -> left );
    preOrder(root -> right ) ;
    return ;
}

void inOrder(Node * root ){
    if(root == NULL ) return ;
    inOrder(root -> left );
    cout << root -> data << " ";
    inOrder(root -> right) ;
    return ;
}

void postOrder(Node * root ){
    if(root == NULL ) return ;
    postOrder(root -> left );
    postOrder(root -> right );
    cout << root -> data << " ";
    return ;
}

#include<queue>
void bfs(Node * root ){
    if(root = NULL ) return ;
    queue<Node *> q ;
    q.push(root);
    q.push(NULL );
    while(!q.empty()){
        Node *curr = q.front() ;
        q.pop() ;
        if(curr == NULL ){
            if(!q.empty()){
                cout << endl ;
                q.push(NULL) ;
                continue;
            }else break ;
        }
        cout << curr -> data << " ";
        if(curr -> left != NULL ) q.push(curr -> left );
        if(curr -> right != NULL ) q.push(curr -> right );
    }  
}

int height(Node * root ){
    if(root == NULL ) return 0;
    int left = height(root -> left );
    int right = height(root -> right);
    return max(left , right) + 1 ;
}
int main(){
    vector<int> v = {1 , 2, -1 , 34, 4 , 5 , 9 , 3, 45 , -2 , 6} ;
    Node * root = buildTree(v); 
    cout << height(root) << endl ;
    return 0;
}