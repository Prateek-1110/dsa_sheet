#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
// this code is useful for all cases , only positives , maybe negatives
 int longestSubarray(vi v, int k) {
        map<int , int >mpp;
        int n = v.size();
        int sum = 0,mx = 0;
        for(int i = 0;i<n;i++){
            sum +=v[i];
            if(sum == k)mx = i+1;
            if(mpp.find(sum-k)!=mpp.end()) mx = max(mx , i-mpp[sum-k]);
            if(mpp.find(sum)==mpp.end()) mpp[sum]=i;
        }
        return mx;
    }
