#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

class Election{
    private:
    public:
    string name;
    int votes;
    
    Election(string name, int votes){
        this->name = name;
        this->votes = votes;
    }

};



int main(){
    int n = 5;
    string name;
    int votes;
    vector<Election> v;
    int totalVotes = 0;
    for(int i = 0; i<n; i++){
        cin>>name;
        cin>>votes;
        Election e(name, votes);
        v.push_back(e);
        totalVotes+=votes;
    }
    int winner = v[0].votes;
    string w = v[0].name;
    for(int i = 0; i<v.size(); i++){
        double per = v[i].votes;
        if(winner < v[i].votes){
            winner = v[i].votes;
            w = v[i].name;
        }
        cout<<v[i].name <<"         "<< v[i].votes<<"         "<<per<<endl;
    }
    cout<<"         "<<"total"<<totalVotes<<endl;
    cout<<w;
}
