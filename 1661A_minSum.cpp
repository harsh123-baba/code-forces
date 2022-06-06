#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void swap(int a, int b){
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
// }


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        // now work starts
        
        // if(abs(a[0] - a[1]) + abs(b[0] - b[1]) > )
        int sum = 0;
        for(int i=1;i<n-1;i++)
        {
            sum += min(abs(a[i]-a[i-1])+abs(b[i]-b[i-1]), 
                 abs(a[i]-b[i-1])+abs(b[i]-a[i-1]));
        }
        
        cout<<sum<<endl;
    }
}
// #include<iostream>
// using namespace std;
 
// int main()
// {
//     int n;
//     cin>>n;
 
//     for(int i=0;i<n;i++)
//     {
//         int t;
//         cin>>t;
 
//         int a[t];
//         int b[t];
 
//         for(int j=0;j<t;j++)
//         {
//             cin>>a[j];
//         }
//         for(int j=0;j<t;j++)
//         {
//             cin>>b[j];
//         }
 
//         int sum=0;
        
//         for(int i=0;j<t-1;j++)
//         {
//             sum += min(abs(a[i]-a[i-1])+abs(b[i]-b[i-1]), 
//                  abs(a[i]-b[i-1])+abs(b[i]-a[i-1]));
//         }
        
//         cout<<sum<<endl;
 
        
//     }
 
//     return 0;
    
// }