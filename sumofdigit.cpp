#include<bits/stdc++.h>
using namespace std ;
//print the sum of the digit of a number using recursion ;
int sum_of_digit(int n){
    if(n==0){
        return 0;
    }
    int small_output = sum_of_digit(n/10);
    int output = small_output + (n%10);
    return output;
}

int main(){
    int n ;
    cin>>n;
    cout<<sum_of_digit(n)<<endl;
    
}