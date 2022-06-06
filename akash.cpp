#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int main(){
    ll t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>v(n);
        ll s1=0;
        map<ll,ll>mp;
        for(i=0; i<n; i++){
            cin>>v[i];
            s1+=v[i];
            mp[v[i]]++;
        }
        ld d1 = (s1/(n*1.0));
        ld d2 = ((d1*1.0)*((n-2)*1.0))*1.0;
        ld rem = (s1-d2)*1.0;
        ll ans=0;
        for(i=0; i<n; i++){
            ll find = (rem-v[i]);
        }
    }
}