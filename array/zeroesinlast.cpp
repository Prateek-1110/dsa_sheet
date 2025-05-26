#include<bits/stdc++.h>
using namespace std;
// we have to place zeroes to last in place ... , dont use new array
// use 2 pointer , one iterating array and one checking non zero element and push it in front
void f(vector<int>v ){
    int n = v.size();
    int no =0;
    for(int i = 0;i<n;i++){
        if(v[i]!=0){
            v[no++]=v[i];
        }
    }
    for(int  i = no ;i<n;i++){
        v[i]=0;
    }
}