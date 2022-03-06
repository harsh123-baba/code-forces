#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, n;
        cin>>x>>y>>n;
        long long num1 = (n/x)*x+y;
        if(num1<=n){
            cout<<num1<<endl;
        }
        else{
            cout<<num1-x<<endl;
        }
    }

}
