#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>v(n);
        ll c1=0;
        for(i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==-1){
                c1++;
            }
        }
        if(n%2){
            ll v1 = n/2;
            ll v2 = v1+1;
            if(c1==v1 || c1==v2){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }else if(n%4==0){
            ll v1 = n/2;
            if(c1==v1){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }else{
            ll v1 = n/2;
            ll v2 = v1+1;
            ll v3 = v1-1;
            if(c1==v1 || c1==v2 || c1==v3){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }
}