#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k , vector<int> arr){
    sort(arr.begin(), arr.end());
    int maxCount = 0;
    for(int i = 0; i<n; i++){
        int count =0;
        int opn = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
            else{
                if(opn < k){
                    opn += abs(arr[j]-arr[i]);
                    if(opn < k){
                        count ++;
                    }
                }
            }
        }
        if(count > maxCount){
            maxCount = count;
        }
        // cout<<maxCount;
    }
    return maxCount;
}

int main()
{
    vector<int> arr = {9, 3, 4, 1, 7};
    int k = 7;
    cout<<solve(arr.size(),k, arr);
    return 0;
}