#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if(n%2 != 0 && k%2 ==0){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }
    // return 0;
}

// 4
// 1 0
// 2 0
// 2 1
// 3 1
