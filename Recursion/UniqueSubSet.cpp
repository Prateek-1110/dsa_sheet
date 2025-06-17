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


void f(int i , vector<int>&v , vector<int>&curr,  vector<vector<int>>&res){
      res.push_back(curr);
      for(int j = i;j<v.size();j++){
        // skip duplicate
          if(j!=i && v[j]==v[j-1])continue;
          //pick
          curr.push_back(v[j]);
          f(j+1,v,curr,res);
          //not pick
          curr.pop_back();
      }
  }
    vector<vector<int>> printUniqueSubsets(vector<int>& v) 
    {
        vector<vector<int>> res ; 
        vector<int>curr;
        // for ans in sorted order
        sort(v.begin(),v.end());
        f(0,v,curr,res);
        return res;
    }