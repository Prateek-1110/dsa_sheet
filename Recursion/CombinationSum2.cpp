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
   if(k==0){
       res.pb(curr);
        return;
    }
   for(int j = i;j<v.size();j++){
    if(j>i && v[j]==v[j-1])continue;
    if(v[j]>k)break;
    curr.pb(v[j]);
    help(j+1,v,k-v[j],res,curr);
    curr.pop_back(); 
   }
}
vvi combinationSum2(vi&v,int k){
    srt(v);
    vvi res ; vi curr;
    help(0,v,k,res,curr);
    return res;
}