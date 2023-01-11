#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        string s = to_string(v[i]);
        int lucky_digits = 0;
        for(int j= 0; j<s.size(); j++){
            if(s[j] == '4' || s[j] == '7'){
                lucky_digits ++;
            }         
        }
        if(lucky_digits <= k){
            count ++;
        }
    }
    cout<<count;
}