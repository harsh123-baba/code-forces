#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        string s = "codeforces";
        // cin>>s;
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        sort(s.begin(), s.end());
        int val1 = 0;
        int val2 = 0;
        // if(s.size() == 1){
        //     cout<<"bob "<<s[0] + + 97;
        // }
        if(s.size() % 2 == 0){
            for(int i = 0; i<s.size()-1; i++){
                val1 += s[i] -97;
                cout<<(int)(s[i])-97<<endl;
            }
        }
        else{
            val2 += s[s.size()-1] - 97;
        }
        if(val1 > val2){
            cout<<"Alice "<<val1<<endl;
        }
        else{
            cout<<"Bob "<<val2<<endl;
        }
        cout<<val1<<" "<<val2<<endl;
    }
}