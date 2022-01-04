#include<iostream>
using namespace std ;
bool checkmember(int n){
    int a = 0 ;
    int b = 1;
    while(a<=n){
        if(a==n){
            return true;

        }
        int c = a+b;
        a=b;
        b=c;

    }
    return false;
}