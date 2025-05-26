#include<bits/stdc++.h>
using namespace std;
// we have to find max sum of any subarray in array , it has -ve also .
// we have to check if adding next element makes sum less or more in each step.
 int maxSubArray(vector<int>& v) 
    {
        int n = v.size();
        int mx =v[0],sum = v[0];
        for(int i = 1;i<n;i++){
            sum = max(v[i],sum+v[i]);
            mx = max(sum , mx);
        }
        return mx;
        
    }