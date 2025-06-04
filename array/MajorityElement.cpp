#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
// for majority element occuring for >n/2
int fn2(vi v){
    int n = v.size();
    map<int,int>mpp;
    for(int i = 0;i<n;i++){
        mpp[v[i]]++;
        if(mpp[v[i]]>n/2) return v[i];
    }
    return -1;
}
vi fn3(vi v){
    // int n = v.size();
    // map<int,int>mpp;
    // set<int>st;
    // vi ans;
    // for(int i= 0;i<n;i++){
    //     mpp[v[i]]++;
    //     st.insert(v[i]);
    // }
    // for( auto it:st){
    //     ans.pb(it);
    // }
    // return ans;
     int n = v.size();
        map<int,int> freq;
        vector<int>result;
        for(int num:v){
            freq[num]++;
        }
        for( auto& it: freq){
            if(it.second>n/3) {
                result.push_back(it.first);
            }
        }
        sort(result.begin(), result.end());
    return result;
}