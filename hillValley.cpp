// #include<bits/stdc++.h> 
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n, m;
//         cin>>n>>m;
//         if(n>m){
//             long long num = (2*n+1);
//             cout<<num<<endl;
//             for(int i = 1; i<=num; i++){
//                 if(i%2==1)cout<<0;
//                 else cout<<1;
//             }
//             cout<<endl;
//         }
//         else if(n==m){
//             long long num = (n*2)+2;
//             cout<<num<<endl;
//             for(int i = 1; i<=num; i++){
//                 if(i%2==1) cout<<0;
//                 else cout<<1;
//             }
//             cout<<endl;
//         }
//         else{
//             long long num = (m*2)+1;
//             cout<<num<<endl;
//             for(int i = 1; i<=num; i++){
//                 if(i%2==0) cout<<0;
//                 else cout<<1;
//             }
//             cout<<endl;
//         }
//     }
// }

#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>> n>>m;
        string res = "";
        if(m==n){
            for(int i = 0; i<n+1; i++){
                res +="10";
            }
        }
        else if(m >n){
            for(int i = 0; i<n+1; i++){
                res+="10";

            }
            for(int i = 0; i<m-n-1; i++){
                res += "110";

            }
            res+="1";
        }
        else{
            for(int i = 0; i<m; i++)
            {
                res +="01";
            }
            for(int i  = 0; i<n-m; i++){
                res += "010";
            }
        }
        cout<<res.size()<<endl;
        cout<<res<<endl;
    }

}


