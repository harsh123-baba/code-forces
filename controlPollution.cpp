#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, x, y;
	    cin>>n>>x>>y;
	    int ans = 0;
	    while(n > 0){
	        if(n > 100 && x < 25*y){
	            n = n-100;
	            ans += x;
	        } 
	        else if(n < 100 && x < (n/4) * y){
                n = 0;
                ans += x;
	        }
	        else{
	            n = n-4;
	            ans += y;
	        }
	        
	    }
        cout<<ans<<endl;
    }

	return 0;
}
