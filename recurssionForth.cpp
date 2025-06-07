// summing n numbers

#include<iostream>
using namespace std ;
int sum(int number , int total = 0 ) {
    if(number == 0 ) return total ;
    total = total + number ;
    sum(number -1 , total );
}

int sum1(int i , int sum = 0  ){
    if(i < 1){
        return sum ;
    }
    sum1(i - 1 , sum + i);
}
int main(){
    int total = sum(10);
    int total1 = sum1(10) ;
    cout << total <<"  Total 1 is ::" << total1;
}