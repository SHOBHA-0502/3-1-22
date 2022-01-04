#include<bits/stdc++.h>
using namespace std ;
void ttprint (int n){
    if(n==0){
        return;
    }
    ttprint(n-1);
    cout<< n << " ";
}
int main(){
    int n ; 
    cin>>n ;
    ttprint(n);
    
}