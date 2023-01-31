#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    unordered_map<int , int> map;
    while(t--){
        int n;
        cin>>n;
        int c = n;
        int mx =1;

        for(int i = 2; i*i <= n; ++i){
            if(c%i == 0){
                int cnt = 0;
                while(c%i == 0){
                    cnt+=1;
                    c/=i;
                }
                map[i] = cnt;
                if(cnt > mx){
                    mx = cnt;
                }
            }
        }
        if(c!= 1){
            map[c] = 1;
        }
        int ans = 0;
        for(int i= 0; i<mx; i++){
            int now = 1;
            for(auto it : map){
                if(it.second > 0){
                    map[it.first] -= 1;
                    now *= it.first;
                }
            }
            ans+= now;
        }
        cout<<ans<<endl;
    }
    
}