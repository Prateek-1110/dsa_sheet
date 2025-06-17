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
 
 void f(vector<int>&curr , vector<int>&v , vector<vector<int>>&res,int freq[]){
      if(curr.size()==v.size()){
          res.push_back(curr);
          return;
      }
      int n = v.size();
      for(int i = 0;i<n;i++){
          if(!freq[i]){
              curr.push_back(v[i]);
              freq[i]=1;
              f(curr , v,res,freq);
              freq[i]=0;
              curr.pop_back();
          }
      }
  }
    vector<vector<int>> uniquePerms(vector<int>& v) {
        vector<int>curr;
        int freq[v.size()];
        for(int i = 0;i<v.size();i++){
            freq[i]=0;
        }
        vector<vector<int>>res;
        f(curr ,v,res,freq);
        return res;
        
    }