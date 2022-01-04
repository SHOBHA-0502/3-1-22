#include<bits/stdc++.h>
using namespace std ;
int main(){
    int   t ;
    cin>>t ;
    while(t--){
        int n ,k;
        cin>>n >>k;
        if(k<=(n+1)/2&& k>0 && n>0){
            for(int i =0;i<n;i++){
                for(int j =0; j<n ;j++){
                    if(i==j&& k>0 &&i%2==0){
                        cout<<"R";
                        k=k-1;
                    }else{
                        cout<<".";
                    }
                    
                }cout<<" ";
                cout << endl;
                
                
            }
 
        }
        else{
            cout<<-1<<endl;
        }
    }
}