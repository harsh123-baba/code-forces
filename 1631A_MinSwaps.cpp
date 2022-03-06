#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int>b(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }

        int amax = 0;
        int bmax = 0;
        for(int i = 0; i<n; i++){
            if(amax < a[i]){
                amax = a[i];
            }
            if(bmax < b[i]){
                bmax = b[i];
            }
        }
        for(int i = 0; i<n; i++){
            if(a[i] < b[i]  && a[i] <= bmax){
                swap(a[i], b[i]);
            }
            if(b[i] < a[i] && b[i] <= amax){
                swap(a[i], b[i]);
            }
        }
        amax = 0;
        bmax = 0;
        for(int i = 0; i<n; i++){
            if(amax < a[i]){
                amax = a[i];
            }
            if(bmax < b[i]){
                bmax = b[i];
            }
        }
        cout<<amax * bmax<<endl;
    }
}