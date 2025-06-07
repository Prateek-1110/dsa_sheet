//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
#include <bits/stdc++.h>
using namespace std;
int smallestDivisor(vector<int> &v, int k)
{
    int n = v.size();
    int low = 1;
    int high = *max_element(v.begin(), v.end());
    if (n == k)
        return high;
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x += v[i] / mid;
            if (v[i] % mid)
                x++;
        }
        if (x > k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = mid;
        }
    }
    return ans;
}
