#include<bits\stdc++.h>
using namespace std ;


int count(int n) {
  if(n==0){
      return 0;
  }
  int smallcount = count(n/10);
  int output = smallcount+1;
  return output ;
}
   
int main(){
    int n ;
    cin>>n ;
    cout<< count(n);
    
}
