#include<bits/stdc++.h>
using namespace std;
//print sum of from 1 to n using recursion ;
int sum_of(int n){
    if(n==0){
        return 0;
    }

    int small_sum = sum_of(n-1);
    int output =small_sum +n;
    return output;
}


int main(){
    int n ;
    cin>>n;
    cout<< sum_of(n)<<endl;

}