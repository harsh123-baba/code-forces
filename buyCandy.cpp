#include<bits/stdc++.h>
using namespace std;

int minimumCost(vector<int>& cost) {
    sort(cost.begin(), cost.end(), greater<int>());
    int count = 0;
    int c = 0;
    if(cost.size()<=2){
        for(int i = 0; i<cost.size(); i++){
            c+= cost[i];   
        }
        return c;
    }
    for(int i = 0;i<cost.size(); i++){
        
        if(count != 2){
            c += cost[i];
            count++;
        }
        else{
            count = 0;
            // i++;
        }
    }

    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int> cost(n);
    for(int i = 0; i<n; i++){
        cin>>cost[i];
    }
    cout<<minimumCost(cost);
}