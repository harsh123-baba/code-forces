#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<long long int> vi;
typedef pair<int, int> pi;
#define in(v,n) for(int i = 0 ; i < n ; i++) cin >> v[i];
#define f(i,a,b) for(int i = a ; i < b ; i++)
#define frev(i,a,b) for(int i = a ; i >= b ; i--)
#define mod 1000000007
#define pb push_back
#define debugVector(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;
#define debugArray(arr, n) for(int i=0; i<n; i++) cout << arr[i] << " "; cout << endl;
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<"\n";
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'
#define o4(p,q,r,s) cout<<p<<" "<<q<<" "<<r<<" "<<s<<'\n'
#define nl cout <<"\n"
#define s(x) sort(x.begin(), x.end());
#define r(s) reverse(s.begin(), s.end());
#define imax INT_MAX
#define imin INT_MIN
//A....Z 65....90
//a....z 97....122

#define LIMIT 1000000
bool primes[LIMIT];

ll modPowerRec(ll base, ll n) {
	if (n == 0) return 1;
	ll res = modPowerRec(base, n / 2);
	res = (res * res) % mod;

	if (n % 2) {
		res = (res * base) % mod;
		res = res % mod;
	}

	return res;
}

void calcPrimes() {
	memset(primes, true, sizeof(primes));
	primes[0] = primes[1] = false;
	for (int i = 2; i * i <= LIMIT; i++) {
		if (primes[i] == true)
			for (int j = i * i; j <= LIMIT; j += i)
				primes[j] = false;
	}
}


void solve() {
	int t;
	cin >> t;

	while (t--) {
		ll n, m;
		cin >> n >> m;

		if (n > m) {
			ll num = (n * 2) + 1;
			o1(num);
			for (int i = 1; i <= num; i++) {
				if (i % 2 == 1) cout << 0;
				else cout << 1;
			}
			nl;
		}

		else if (n == m) {
			ll num = (n * 2) + 2;
			o1(num);
			for (int i = 1; i <= num; i++) {
				if (i % 2 == 1) cout << 0;
				else cout << 1;
			}
			nl;
		}

		else {
			ll num = (m * 2) + 1;
			o1(num);
			for (int i = 1; i <= num; i++) {
				if (i % 2 == 0) cout << 0;
				else cout << 1;
			}
			nl;
		}
	}
}


int main(int argc, char **argv)
{
	// Code goes here
// 	FIO;
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	solve();
	return 0;
}