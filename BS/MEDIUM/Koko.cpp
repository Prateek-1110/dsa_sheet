#include <bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int> &v, int h)
{
    int n = v.size();
    sort(v.begin(), v.end());
    if (n == h)
        return v[n - 1];
    int low = 1;
    int high = v[n - 1];
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        long long x = 0;
        for (int i = 0; i < n; i++)
        {
            x += v[i] / mid;
            if (v[i] % mid)
                x++;
        }
        if (x <= h) 
// this means speed is fast , and we have to find min
// so we have to reduce high to find small value that is valid o.w ans is already assigned as mid
        {
            high = mid - 1;
            ans = mid;
        }
        else
            low = mid + 1;
    }
    return ans;
}