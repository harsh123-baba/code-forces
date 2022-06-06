#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x, y;
        cin>>x>>y;
        if(y==1){
            if(x%2){
                cout<<"Odd\n";
            }
            else{
                cout<<"Even\n";
            }
        }
        else{
            if(y == 2){
                cout<<"Odd\n";
            }
            else{
                cout<<"Even\n";
            }
        }
    }
}

// 4
// 4 1
// 3 3
// 9 1
// 3489601027782 8104267
