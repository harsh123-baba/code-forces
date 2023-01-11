#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    int chest = 0;
    int biceps = 0;
    int back = 0;
    for(int i = 0; i<n; i++){
        if(i%3 == 0){
            chest += v[i];
        }
        else if(i % 3 == 1){
            biceps += v[i];
        }
        else if(i % 3 == 2){
            back += v[i];
        }
    }
    if(biceps >= chest && biceps >= back){
        cout<<"biceps";
    }
    else if (chest >= biceps && chest >= back)
    {
        cout<<"chest";
    }
    else if (back >= chest && back >= biceps)
    {
        cout<<"back";
    }
}