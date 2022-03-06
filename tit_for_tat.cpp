#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define re(n) cin >> n
#define all(a) a.begin(), a.end()
#define pb push_back
#define mp make_pair
#define ff(i, x, n) for (ll i = (ll)x; i < (ll)n; i++)
#define f(i, n) ff(i, 0, n)
#define ffi(i, n, x) for (ll i = (ll)n; i >= (ll)x; i--)
#define fi(i, n) ffi(i, n, 0)
#define rea(a) \
    f(i, (sizeof a / sizeof a[0])) { re(a[i]); }
#define rev(a) \
    f(i, a.size()) { re(a[i]); }
#define puta(a)                                             \
    f(i, (sizeof a / sizeof a[0])) { cout << a[i] << " "; } \
    cout << "\n"
#define putv(a)                             \
    f(i, a.size()) { cout << a[i] << " "; } \
    cout << "\n"
#define fast std::ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define te(t) \
    ll t;     \
    re(t);    \
    while (t--)
#define MOD 1000000007
#define de cerr

#ifdef LOCAL
#define cerr cout
#endif

int main()
{
    te(t)
    {
        ll n, k;
        re(n >> k);
        vector<ll> a(n);
        rev(a);
        ll inde = 0;
        while (k && inde < n)
        {
            if (a[inde] == 0)
            {
                inde++;
            }
            else
            {
                a[inde]--;
                a[n - 1]++;
                k--;
            }
        }
        putv(a);
    }
    return 0;
}