#include<iostream>
using namespace std ;
int fibonaci_p(int n ){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int small_output1 = fibonaci_p(n-1);
    int small_output2 = fibonaci_p(n-2);
    int output = small_output1+small_output2;
    return output;
}

int main(){
    int n ;
    cin>>n ;
    cout<< fibonaci_p(n)<<endl;

}