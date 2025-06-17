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
//.....................
//without using any space
void help(int i , vi&v,vvi&res){
    if(i==v.size()){
        res.pb(v);
        return;
    }
    for(int j = i;j<v.size();j++){
        swap(v[i],v[j]);
        help(i+1,v,res);
        swap(v[i],v[j]);
    }
}
vvi permutations(vi&v){
    vvi ans;
    help(0,v,ans);
    return ans;
}
//.....................
// using extra space for freq array........
 void f(vector<int>& curr, vector<int>& v, vector<vector<int>>& res, vector<int>& freq) {
    if (curr.size() == v.size()) {
        res.push_back(curr);
        return;
    }

    for (int i = 0; i < v.size(); ++i) {
        if (freq[i]) continue;//skip as already taken in current permutation
        if (i > 0 && v[i] == v[i - 1] && !freq[i - 1]) continue; // skip duplicate
        curr.push_back(v[i]);
        freq[i] = 1;//mark as taken
        f(curr, v, res, freq);
        freq[i] = 0;//not picking
        curr.pop_back();
    }
}

vector<vector<int>> uniquePerms(vector<int>& v) {
    sort(v.begin(), v.end()); 
    vector<vector<int>> res;
    vector<int> curr;
    vector<int> freq(v.size(), 0);  
    f(curr, v, res, freq);
    return res;
}
