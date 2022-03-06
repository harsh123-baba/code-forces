#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
T avg (T* arr, int len){
    T sum = 0;
    for(int i = 0; i<len; i++){
        sum += arr[i];
    }
    T a =sum/(T)(len);
    return a;
}


int main(){
    int a[] = {1, 2, 3, 4};
    cout<<avg(a, 4)<<endl;
    long a1[] = {10000000000, 2, 3, 4};
    cout<<avg(a1, 4)<<endl;
    double a2[] = {1.0, 2.0, 3.0, 4.0};
    cout<<avg(a2, 4);
    
}


// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//     string line;
//     ifstream iFile {"a.txt"};
//     ofstream oFile {"b.txt"};
 
//     if(iFile && oFile){
 
//         while(getline(iFile,line)){
//             oFile << line << "\n";
//         }
 
//         cout << "Done\n";
 
//     } else {
//         cout<<"Cannot done this operation";
//     }
 
//     //Closing file
//     iFile.close();
//     oFile.close();
 
//     return 0;
// }


