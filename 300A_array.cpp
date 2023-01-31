#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int> first, second, third;
    for(int  i = 0; i<n; i++){
        cin>>v[i];
        if(v[i] == 0){
            third.push_back(v[i]);
        }
        else if(v[i] > 0){
            second.push_back(v[i]);
        } 
        else {
            first.push_back(v[i]);
        }
    }
    if(second.size()==0){
        for(int i = 0; i<2; i++){
            second.push_back(first.back());
            first.pop_back();
        }
    }
    if(!(first.size() % 2)){
        third.push_back(first.back());
        first.pop_back();
    }

    cout<<first.size();
    for(int i = 0; i<first.size(); i++){
        cout<<" "<<first[i];
    }
    cout<<endl;
    cout<<second.size();
    for(int i = 0; i<second.size();i++){
        cout<<" "<<second[i];
    }
    cout<<endl;
    cout<<third.size();
    for(int i = 0; i< third.size(); i++){
        cout<<" "<<third[i];
    }
    
}