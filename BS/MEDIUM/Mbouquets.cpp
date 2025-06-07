#include <bits/stdc++.h>
using namespace std;
//  helper function , it finds if day == mid , how many bouquets we can make
int f(int mid, vector<int> &v, int k)
{
    int ans = 0;
    int count = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] <= mid){
            ans++;
            if (ans == k){
                count++;
                ans = 0;
            }
        }else
            ans = 0;
    }
    return count;
}
int minDays(vector<int> &v, int m, int k){
    int n = v.size();
    long long mx = 1LL * m * k;
    if (mx > n)
        return -1;
    int ans = -1;
    int low = *min_element(v.begin(), v.end());
    int high = *max_element(v.begin(), v.end());
    while (low <= high){
        int mid = (low + high) / 2;
        if (f(mid, v, k) >= m){
            high = mid - 1;
            ans = mid;
        }
        else
            low = mid + 1;
    }
    return ans;
}
