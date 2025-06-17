#include <bits/stdc++.h>
#define cia(x) for(int i = 0; i < x.size(); i++) cin >> x[i];
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define srt(x) sort(x.begin(), x.end())
#define rsrt(x) sort(x.rbegin(), x.rend())
#define pb push_back
using namespace std;
void help(int i , vi&v , vi& curr , vvi&res){
    if(i==v.size()){
        res.pb(curr);
        return;
    }
    // not picking 'i' index and exploring all subseq after i 
    help(i+1,v,curr,res);
    // now curr has v[i] so i is picked
    curr.pb(v[i]);
    // i is picked and now it explores all subseq including i and after that
    help(i+1,v,curr,res);
    // backtracking
    curr.pop_back();
}
vvi subset(vi &v ){
    srt(v);
    vvi res; vi curr;
    // start with index i = 0 for subseq
    help(0,v,curr,res);
    srt(res);
    return res;
}