#include<bits/stdc++.h>
using namespace std ;

// print hello given number of times using recursion .
void print_hello(int n){
    if(n==0){
        return ;
    }

    print_hello(n-1);
    cout<< "hello"<<endl;;

}

int main(){
    int n ;
    cin>>n;
    print_hello(n);

}