#include<math.h>
#include<iostream>
using namespace std; 
int main(){
    // cout<<log10(1/10);
    int t;
    cin>>t;
    while(t--){
        int x1, p1;
        int x2, p2;
        cin>>x1>>p1;
        cin>>x2>>p2;
        if(p1> p2 && x1>x2){
            cout<<">\n";

        }
        else if(p1<p2 && x1<x2){
            cout<<"<\n";
        }
        else if(p1==p2 && x1==x2){
            cout<<"=\n";
        }
        else{
            // double x = x1/x2;
            double val = p1-p2+log10(x1/x2);
            cout<<val;
            cout<<log10(x1/x2);
            if(val <0){
                cout<<"<\n";
            }
            else if(val>0){
                cout<<">\n";
            }
            else{
                cout<<"=\n";
            }
        }
    }
}