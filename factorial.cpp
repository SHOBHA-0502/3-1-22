#include<iostream>
using namespace std;

// print factorial of n using recursion 
int factorial(int n){
    if(n==0){
        return 1;
    }

    int small_output = factorial(n-1);
    int output = small_output*n;
    return  output;
}

int main(){
    int n ;
    cin>>n;
    cout<<factorial(n)<<endl;

}