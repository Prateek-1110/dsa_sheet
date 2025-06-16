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
// this stores all subseq  vector with sum k in res vector 
void help( int i , vi&v  , int k , int currsum , vi & curr , vvi&res){
    if(i==v.size()){
        if(currsum==k)res.pb(curr);
        return;
    }
    // taking 'i' (picking)
    curr.pb(v[i]);
    help(i+1,v,k,currsum,curr,res);
    // excluding 'i' (not picking)
    curr.pop_back();
    help(i+1,v,k,currsum,curr,res);
}
vvi subset(vi &v , int k ){
    vvi res; vi curr;
    // start with index i = 0 for subseq
    help(0,v,k,0,curr,res);
    return res;
}