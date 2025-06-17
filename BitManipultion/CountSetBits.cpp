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
//basic way
int countSetBits(int n) {
    int count = 0;
    while(n > 0){
        if(n & 1) count++;  // check if last bit is 1
        n = n >> 1;         // right shift to remove last bit
    }
    return count;
}
// better 
int countSetBits(int n) {
    int count = 0;
    while(n > 0){
        n = n & (n - 1);  // removes the lowest set bit
        count++;
    }
    return count;
}
//using in built function
int countsetbits(int n ){
    return  __builtin_popcount(n);  

}