#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    cin>>s;
    unordered_map<char, int> map;

    for(int i = 0; i<s.size(); i++){
        if(map[s[i]] > 0){
            map[s[i]]++;
        }
        else{
            map[s[i]] = 1;
        }
    }

    for(int i = 0; i<s.size(); i++){
        if(map[s[i]] == 1){
            cout<<s[i];
            map[s[i]]--;
        }
        if(map[s[i]] == 2){
            
        }

    }

}