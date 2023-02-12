#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int count = 0;
        for(int i = 0;i<n; i++){
            cin>>v[i];
            if(v[i]==2) {count++;}
        }
        if(count & 1){
            cout<<"-1"<<endl;
        }
        else{
            int curr = 0;
            int k = -1;
            for(int i = 0; i<n; i++){
                if(v[i]==2){
                    curr++;
                }
                if(curr == count/2){
                    k=i;
                    break;
                }
            }
            cout<<k+1<<endl;
        }
    }
}

