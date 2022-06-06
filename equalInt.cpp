#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        int count = 0;
        if(x <= y){
            cout<<y-x<<endl;
        }
        else{
            if((x-y) % 2 == 0){
                cout<<(x-y)/2<<endl;
            }
            else{
                cout<<(x-y)/2 + 2<<endl;
            }
        }
    }
}
