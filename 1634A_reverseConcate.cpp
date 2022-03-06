#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispillindrome(string s){
    int l = 0; 
    int h = s.size()-1;
    while(l < h){
        if(s[l]==s[h]){
            l++;
            h--;

        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0){
            cout<<1<<"\n";
        }
        else{
            if(ispillindrome(s)){
                cout<<1<<'\n';
            }
            else{
                cout<<2<<"\n";
            }
        }
    }
}
