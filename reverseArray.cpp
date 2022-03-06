#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    vector<int>ans(n);
    for(int i = 0, j = n-1; i<n; i++, j--){
        ans[i] = v[j];
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}