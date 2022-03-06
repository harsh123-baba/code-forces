#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        if(n%7 == 0){
            cout<<n<<endl;
        }
        else{
            // int lastDigit = n % 10;
            int remnum = n / 10;
            for(int i = 0; i<=9; i++){
                remnum = remnum * 10 + i;
                if(remnum % 7 == 0){
                    cout<<remnum<<endl;
                    break;
                }
            }
        }
    }
}