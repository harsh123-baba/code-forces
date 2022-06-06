// #include<bits/stdc++.h> 
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i = 0; i<n; i++){
//             cin>>v[i];
//         }
//         // vector<int> v = {1, 3, 2, 3};
//         int cnt = 1;
//         bool flag = true;
//         for(int i = 0; i<n-1; i++){
//             if(v[i] <= v[i+1]){
//                 continue;
//             }
//             else{
//                 if(cnt == 1){
//                     cnt--;
//                     int temp;
//                     temp = v[i];
//                     v[i] = v[i+1];
//                     v[i+1] = temp;
//                 }
//                 else{
//                     flag = false;
//                     break;
//                 }
//             }
//         }
//         if(flag == false){
//             cout<<"NO\n";
//         }
//         else{
//             cout<<"YES\n";
//         }
//     }
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--)
  {
      long long int n,x,y,c=0;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          if(arr[i-1]>arr[i]&&i>=1)
          {
              swap(arr[i-1],arr[i]);
              if(arr[i-2]>arr[i-1]&&i>=2)
              {
                  c+=2;
              }
              else  if(arr[i-2]<arr[i-1]&&i>=2)
              {
                  c+=1;
              }
              else if(i==1)
              {
                  c+=1;
              }
              else
              {
                  c+=1;
              }
          }
      }
      
      if(c<2)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      
  }
  return 0;
}