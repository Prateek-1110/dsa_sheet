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
void help (int i , vi&v , int k , vvi&res,vi&curr){
    if(i==v.size()){
        if(k==0) res.pb(curr);
        return;
    }
    if(v[i]<=k){
        //picking i
        curr.pb(v[i]);
        help(i,v,k-v[i],res,curr);
        curr.pop_back();
    }
    //not picking i
    help(i+1,v,k,res,curr);
}
vvi ans(vi&v,int k){
    vvi res ; vi curr;
    help(0,v,k,res,curr);
    return res;
}