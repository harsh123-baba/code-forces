#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cA = 0;
        int cB = 0;
        int cC = 0;
        int n = s.length();
        
        for(int i = 0; i<n; i++){
            if(s[i]=='A'){
                cA++;
            }
            if(s[i]=='B'){
                cB++;
            }
            if(s[i]=='C'){
                cC++;
            }
        }

        if(cB == cC && cA == 0){
            cout<<"Yes"<<endl;
        }
        else if(cB == cA && cC == 0){
            cout<<"Yes"<<endl;
        }
        else if (cB == cA*2 && cB == cC*2){
            cout<<"Yes"<<endl;
        }
        else if(cB == (cA + cC)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}