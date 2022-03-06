#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int condt=1;
    for(int i = 1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            condt ++;
            if(condt == 7){
                cout<<"YES\n";
                return 0;
            }
        }
        else{
            condt = 1;
        }
    }
    cout<<"NO\n";
}