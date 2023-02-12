#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x , y;
        cin>>x>>y;
        cout<<(x-y) + (x-y-1)+1<<endl;
        for(long i = y+1; i<=x; i++){
            cout<<i<<" ";
        }
        for(long i = x-1; i>=y; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
