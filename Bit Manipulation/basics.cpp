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

//Operators
/*
And(&)           -> bit is 1 if both bits are 1
XOR(^)           -> bit is 1 if both bits are diff
left shift(<<)   -> n<<i means n*(2^i)
right shift(>>)  -> n>>i means n/(2^i)
*/
//Basic Functions
/*
checking if ith bit is set -> n&(1<<i)
clearing ith bit           -> n&~(1<<i)
toggle ith bit             -> n^(1<<i)
count set bits in int n    -> __builtin_popcount(n);
*/
// if(n&1) means n is odd
// if (n&(n-1)==0) means n is power of 2