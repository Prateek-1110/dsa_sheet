#include<bits/stdc++.h>
using namespace std;
// this counts total subarrays with sum 'k'
// works for both positives , negatives
int  subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int sum = 0, count = 0;
    for (int num : nums) {
        sum += num;
        if (mpp.find(sum - k) != mpp.end()) {
            count += mpp[sum - k];
        }
        mpp[sum]++;
    }
    return count;
}