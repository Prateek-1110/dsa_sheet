#include <bits/stdc++.h>
using namespace std;
int f(int mid, vector<int> &v)
{
    int ans = 0;
    int cnt = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (ans + v[i] > mid)
        {
            cnt++;
            ans = v[i];
        }
        else
            ans += v[i];
    }
    return cnt;
}
int shipWithinDays(vector<int> &v, int k)
{
    int n = v.size();
    int low = *max_element(v.begin(), v.end());
    int high = accumulate(v.begin(), v.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (f(mid, v) > k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}