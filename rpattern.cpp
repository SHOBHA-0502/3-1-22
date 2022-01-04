#include<iostream>
using namespace std ;
// decreasing triange using recursion ;
void print_pattern(int n ){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    for(int i =1 ; i<=n;i++){
        cout<< i;
    }cout<<endl;

    print_pattern(n-1);
     for(int i =1 ; i<=n;i++){
        cout<< i;
    }cout<<endl;
    
    
}

int main(){
    int n ;
    cin>>n ;
    print_pattern(n);

}