#include<bits/stdc++.h>
using namespace std;
int countSubarraysWithXOR(vector<int>& v, int k) {
    unordered_map<int, int> mp;
    int xorSum = 0, count = 0;
    for (int num : v) {
        xorSum ^= num;
        if (xorSum == k) count++;
        if (mp.find(xorSum ^ k) != mp.end()) {
            count += mp[xorSum ^ k];
        }
        mp[xorSum]++;
    }
    return count;
}
