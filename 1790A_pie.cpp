#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string val;
        cin>>val;
        string actual_val = "3141592653589793238462643383279";
        // cout<<actual_val;
        int count = 0;
        for(int i = 0; i<val.size(); i++){
            if(val[i] == actual_val[i]){
                count++;
                continue;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }
}