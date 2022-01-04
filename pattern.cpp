#include<iostream>
using namespace std ;
//pattern printing using recursion ;
void print_pattern(int n){
    if(n==0){
        return ;
    }
    print_pattern(n-1);
for(int i =1 ;i<=n ;i++){
    cout<< i<< " ";
}cout<<endl;
}
int main(){
    int n ;
    cin>>n ;
    print_pattern(n);

}