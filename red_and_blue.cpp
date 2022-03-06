#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
    //vector<int> h;
    int t;
    cin>>t;
    for(int i =0; i< t; i++)
    {
        int r, b, d;
        cin>>r>>b>>d;
        int a = 0;
        for(r; r>0; r--)
        {
            for(b; b>0; b--)
            {
                if (abs(r - b) <= d)
                {
                    a += 1;
                    //h.push_back(a);
                    break;
                }
            }
            
        }
        if(a>0){
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    // for(int i =0; i<h.size(); i++)
    // {
    //     if(h[i]==1)
    //     {
    //         cout<<"YES\n";
    //     }
    //     else{
    //         cout<<"NO\n";
    //     }
    // }
}



