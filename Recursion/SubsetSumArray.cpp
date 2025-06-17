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
void help(int i , int sum , vi& v, int n , vi&sumsubset){
    if(i==n){
        sumsubset.pb(sum);
        return;
    }
    help(i+1,sum +v[i],v,n,sumsubset);
    help(i+1,sum , v,n,sumsubset);
}
vi f(vi&v , int n ){
    vi sumsubset;
    help(0,0,v,n,sumsubset);
    srt(sumsubset);
    return sumsubset;
}