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
// this return count of subseq with sum 'k'
int help( int i , vi&v  , int k , int currsum ){
    if(i==v.size()){
        return (currsum==k)?1:0;
    }
    // taking 'currsum+v[i]' -> (picking)
    int pick = help(i+1,v,k,currsum+v[i]);
    // only using currsum -> not picking
    int notpick = help(i+1,v,k,currsum);
    return pick+notpick;
}
int count (vi &v , int k ){
    // start with index i = 0 for subseq
    //initially currsum = 0 
   return  help(0,v,k,0);
    
}