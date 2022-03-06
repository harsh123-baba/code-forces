#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    long n;
    // vector<int>v = {1 ,2, 5, 6, 7 ,10 ,21 ,23 ,24 ,49};
    cin>>n;
    vector<long> v(n);
    for(long i = 0L; i<n; i++){
        cin>>v[i];
    }
    long ans = 0;
    long count  = 1;
    for(long i =1L; i<n; i++){
        if(2*v[i-1] >= v[i]){
            count++;
        }
        else{
            ans = max(ans, count);
            count = 1;
        }
    }
    cout<<max(ans, count);
}