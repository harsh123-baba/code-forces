#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int digitSum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    // cout<<digitSum(n)<<endl;
        if(digitSum(n) % 2 == 0){
            while(digitSum(n) %2 == 0){
                // cout<<n<<endl;
                n++;
                // cout<<n<<endl;

            }
            
        }
        else{
            while(digitSum(n) %2 != 0){
                n++;
            }
            
        }
        cout<<n<<endl;
    }
}