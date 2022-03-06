#include<iostream>
#include<stdio.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    gcd(b, a % b);
    return 1;
}
int sum(int add, int n){
    int m;
    while (n > 0)
    {
        m = n % 10;
        add = add + m;
        n = n / 10;
    }
    return add;
}

int main(){
    int t ;
    cin>>t;
    for(int i =0; i<t; i++){
        long long n;
        cin>>n;
        int A[2];
        A[0] = n;
        A[1]=0;
        A[1] = sum(A[1], n);
        // if(gcd(A[0], A[1])>0){
        //     return n;
        // }
        // else{
        //     ++n;
        //     gcd(A[0], A[1])
        // }

cout<<gcd(A[0], A[1]);

    }
}