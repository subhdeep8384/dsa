// monotonic stack problem :> when we store elements in some specific order such a stack is known as monotonic stack 

#include<iostream>
#include<stack>
#include<list>
using namespace std ;

int *  f(int * arr){
    int size = sizeof(arr) ;
    // cout << size ;
    int * nge = new int[size + 1] ;
    for(int i = 0 ; i <= size ; i++ ){
        nge[i] = -1  ;
        for(int j = i + 1 ; j <= size ; j++ ){
            if(arr[j] > arr[i]){
                nge[i] = arr[j] ;
                break; 
            }
        }
    }
    return nge ;
} ;

int *  fBackTraversal(int * arr , int size ){
    int * nge = new int[size] ;
    stack<int> st ;

    for(int i = size - 1 ; i >= 0 ; i-- ){
        while(!st.empty() && st.top() <= arr[i] ){st.pop() ;}

        if(st.empty()) nge[i] = -1  ;
        else nge[i] = st.top() ;

        st.push(arr[i]) ;
    }

    return nge ;
}

int main(){
    int arr[] = {6 , 0 , 8 , 1, 3} ;
    int * ans = f(arr) ;

    for(int i = 0 ; i < 5  ; i++ ){
        cout << ans[i] << " " ;
    }

    cout << endl<<  endl << endl ;

    int * ans2 = fBackTraversal(arr , 5) ;
     for(int i = 0 ; i < 5  ; i++ ){
        cout << ans2[i] << " " ;
    }
}