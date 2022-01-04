#include<iostream>
using namespace std ;
int main(){
    int n,largest ,second ;
    cin>>n ;
    long long  x =-2147483648;
    if(n ==1 || n==0){
        cout<< x;
    }
    else{
   int arr[n];
    
   for(int i =0 ;i<n ; i++){
       cin>>arr[i];
   }
   if(arr[0]>arr[1]){
       largest=arr[0];
       second = arr[1];
   }
   else{
       largest=arr[1];
       second = arr[0];
   }
   for(int i =2; i<n; i++){
       if(arr[i]>largest){
           second = largest;
           largest=arr[i];
       }
       else if(arr[i]>second && arr[i]!= largest){
           second = arr[i];
       }
       
       
   }
   if(largest==second){
       cout<<x;
   }
  else{
   cout<< second ;}
    }



   
}