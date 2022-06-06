#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y;
        cin>>x>>y;
        
        if(x > y){
            cout<<"0 0"<<endl;
        }
        else{
            if(y%x){
                cout<<"0 0\n";
            }
            else{
                long long val = y/x;
                cout<<1<<" "<<val<<endl;
            }
        }
        
    }
}