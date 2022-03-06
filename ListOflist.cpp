#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    // vector<int> v = {1, 2, 1};

	    for(int i=0; i<n;i++){
	        cin>>v[i];
	    }
	    unordered_map<int, int> map;
	    for(int i = 0; i<n; i++){
	        if(map[v[i]]){
	            map[v[i]]++;
	        }
	        else{
	            map[v[i]]=1;
	        }
	    }
	    if(map.size()==1){
	        cout<<"0\n";
	    }
	    else{
	        int maxi = -1;
	        for(auto it : map){
                maxi = max(maxi, it.second);
	        }
	        if(maxi==1){
	            cout<<"-1\n";
	        }
	        else{
	            int y = n-maxi;
                cout<<y+1<<endl;
            
	            
	        }
            
	    }
	    
	}
	return 0;
}