#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long int
int main() {
 
	// Your code here
	int q,t,b;
	cin>>q;
	while(q--){
		cin>>t;
        ll a[t];
        ll ans;
		for(int i=0;i<t;i++) cin>>a[i];
        sort(a,a+t);
        ll val=a[t-1]-a[t-2];
        if(val>1 || (t==1 && a[0]>1)) cout<<"NO\n";
        else cout<<"YES\n";
        
	}
	return 0;
}