#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int total;
    cin>>total;
    while(total--){
        int n;
        cin>>n;
        if(n%2 == 1){
            cout<<"-1\n";
        }
        else{
            cout<<"1"<<" "<<n/2<<endl;
        }
    }
}