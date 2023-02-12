#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b, n, m;
        cin>>a>>b>>n>>m;
        long long int val= 0;
        // while(n>m){
        //     long long int day1 = a*m;
        //     long long int day2 = b*(m+1);
        //     val += min(day1,day2);
        //     n-=(m+1);
        //     // cout<<n<<" "<<val<<endl;
        // }
        // if(n>0){
        //     if(a>b){
        //         val += b*n;
        //     }
        //     else{
        //         val += a*n;
        //     }
        // }
        long long ratio = n/(m+1);
        long long x = min(a, b);
        long long p1 = ratio*m*a + (n-ratio*(m+1))*x;
        long long p2 = n*x;
        long long y = min(p1, p2);
        cout<<y<<endl;

    }
    
}

// int a, b, n, m;
// cin >> a >> b >> n >> m;
// int x = b * n;
// int y = a * (n / (m + 1)) * m;
// y += min(n % (m + 1) * a, n % (m + 1) * b);
// cout << min(y, x) << endl;
// }

// signed main() {
// int t;
// cin>>t;
// while (t--) {
//   solve();
// }
// return 0;
// }A