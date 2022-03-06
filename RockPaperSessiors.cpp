#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=4;
        cin>> n;
        string s;
        cin>>s;
        string ans;
        vector<char> temp(n+1);
        if(n==1){
            cout<<s<<endl;
            
        }
        else{
            for(int i = 0; i<n; i++){
                temp[i] = s[i];
                for(int j = i+1; j<n; j++){
                    if(temp[j-1]==s[j]){
                        temp[j] = s[i];
                    }
                    else if((temp[j-1]== 'R' && s[j]=='S' )|| (temp[j-1]=='S' && s[j]=='R')){
                        temp[j] = 'R';
                    }
                    else if((temp[j-1] == 'R' && s[j]=='P')||(temp[j-1] == 'P' && s[j]=='R')){
                        temp[j] = 'P';
                    }
                    else if((temp[j-1] == 'S' && s[j]=='P')||(temp[j-1] == 'P' && s[j]=='S')){
                        temp[j] = 'S';
                    }
                    
                }
                ans+=temp[n-1];
            }
            cout<<ans<<endl;
        }
    }
    
}