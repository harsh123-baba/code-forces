#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, q;
    cin>>n>>q;
    vector<int> row(n);
    vector<int>col(n);
    vector<int>sDiag(n);
    vector<int>kDiag(n);
    while(q--){
        int x,y;
        cin>>x>>y;

        if(row[x] == 1 || col[y] == 1 || sDiag[x+y] == 1 || kDiag[x-y + n-1] == 1){
            cout<<"NO\n";
        }
        else{
            row[x] = 1;
            col[y] = 1;
            sDiag[x+y] = 1;
            kDiag[x-y+n-1] = 1;
            cout<<"YES\n";
        }
    }
}