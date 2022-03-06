#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSort(vector<int> v){
    int n = v.size();
    for(int i = 0; i<n-1; i++){
        if(v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
        if(isSort(v)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}   