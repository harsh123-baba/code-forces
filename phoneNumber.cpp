#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    n = s.size();
    for(int i = 0; i<s.size(); i++){
        if(s[i] - '0' == 8){
            cnt++;
        }
    }
    cout<<min(cnt, n/11);
}