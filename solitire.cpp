#include<iostream>
#include<string>
using namespace std;

void done(string s){
    for(int j = 0; j<s.length(); j++){
        int count = 0;
        // for(int k = 0; k<2; k++)
        while(count !=2)
        {
            if(s[j]=='A'){
                for(int l = j+2; l<s.length()-j; l++){
                    if(s[l] == 'B'){
                        s.erase(s.begin()+l);
                        s.erase(s.begin()+j);
                        count++;
                        
                        break;
                    }
                }
            }
            if(count == 2){
                break;
            }
            if(s[j]=='B'){
                for(int l = j+2; l<s.length()-j; l++){
                    if(s[l] == 'A'){
                        s.erase(s.begin()+l);
                        s.erase(s.begin()+j);
                        break;
                    }
                    if(s[l] == 'C'){
                        s.erase(s.begin()+l);
                        s.erase(s.begin()+j);
                        break;
                    }

                }

            }
            if(count == 2){
                break;
            }
            if(s[j]=='C'){
                for(int l = j+2; l<s.length()-j; l++){
                    if(s[l] == 'B'){
                        s.erase(s.begin()+l);
                        s.erase(s.begin()+j);
                        break;
                    }
                }
            }
            if(count == 2){
                break;
            }
            if(s.length()==2){
                cout<<"No";
            }
        }
    }
    if(s.length()== 0){
        cout<<"Yes";

    }
    else{
        cout<<"NO";
    }
}



int main(){
    // int t;
    // cin>>t;
    // for(int i = 0; i<t; i++){
    //     string s;
    //     cin>>s;
    //     done(s);
        
    // }

    string s = "BCBCBCBCBCBCBCBC";
    done(s);
}