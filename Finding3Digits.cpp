#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

vector<int> findEvenNumbers(vector<int>& d) {
        vector<int> v;
        int n = d.size();
        unordered_map<int,int> a;
        for(int i = 0; i<n;i++){
            for(int j= i+1; j<n;j++){
                for(int k = j+1; k<n;k++){
                    if((d[k]&1) == 0){
                        if(d[i]!=0){
                            a[d[i]*100+d[j]*10+d[k]]++;
                        }
                        if(d[j]!=0){
                            a[d[j]*100+d[i]*10+d[k]]++;
                        }
                    }
                    
                    if((d[i]&1)==0){
                        if(d[k]!=0){
                            a[d[k]*100+d[j]*10+d[i]]++;
                        }
                        if(d[j]!=0){
                            a[d[j]*100+d[k]*10+d[i]]++;
                        }
                    }
                    if((d[j]&1)==0){
                        if(d[i]!=0){
                            a[d[i]*100+d[k]*10+d[j]]++;
                        }
                        if(d[k]!=0){
                            a[d[k]*100+d[i]*10+d[j]]++;
                        }
                    }
                }
            }
        }
        for(auto it: a){
            v.push_back(it.first);
        }
        sort(v.begin(), v.end());
        return v;
    }

int main(){

}