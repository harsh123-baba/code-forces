#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, l, r, k;
        cin>>n>>l>>r>>k;
        vector<int> A(n);
        for(int i = 0; i<n; i++){
            cin>>A[i];
        }

        sort(A.begin(), A.end());
        int count =0;
        for(int i = 0; i<n; i++){
            
            if(A[i]<l){
                continue;
            }
            else if(A[i] >= l && A[i]<=r){
                if(k-A[i]>=0){
                    k = k-A[i];
                    count++;
                }
                else{
                    break;
                }
            }
            
        }

        cout<<count<<endl;
    }

}

// 8
// 3 1 100 100
// 50 100 50
// 6 3 5 10
// 1 2 3 4 5 6
// 6 3 5 21
// 1 2 3 4 5 6
// 10 50 69 100
// 20 30 40 77 1 1 12 4 70 10000
// 3 50 80 30
// 20 60 70
// 10 2 7 100
// 2 2 2 2 2 7 7 7 7 7
// 4 1000000000 1000000000 1000000000
// 1000000000 1000000000 1000000000 1000000000
// 1 1 1 1
// 1
