#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int s = 0;
        if(a == 0){
            cout<<"1\n";
        }
        else if(a < b){
            cout<<a+2*b+1<<endl;
        }
        else if(a==b) {
            cout<<a + 2*b+1<<endl;
        }
        else{
            cout<<a+2*b+1<<endl;
        }
    }
}