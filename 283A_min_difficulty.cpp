#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[101], i, c = 0, d = 30000;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];

    for (i = 2; i <= n; i++)
    {
        // cout<<"a[i]-a[i-1] "<<a[i]-a[i-1]<<endl;
        c = max(c, a[i] - a[i - 1]);
        // cout<<" c is "<<c<<endl;
    }

    for (i = 2; i < n; i++)
    {
        // cout<<"a[i+1]-a[i-1] "<<a[i+1]-a[i-1]<<endl;
        d = min(d, max(c, a[i + 1] - a[i - 1]));
        // cout<<" d is "<<d<<endl;
    }
    cout << d;
}