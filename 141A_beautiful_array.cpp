#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x ;
        cin>>x;
        vector<int> v(x);
        for(int j = 0; j<x; j++){
            cin>>v[j];
        }
        if(v[0] == v[x-1]){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            cout<<v[x-1]<<" ";
            for(int k = 0;k<x-1; k++){
                cout<<v[k]<<" ";
            }
        }
    }
}