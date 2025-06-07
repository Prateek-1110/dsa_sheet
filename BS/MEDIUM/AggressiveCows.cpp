#include <bits/stdc++.h>
using namespace std;
int f(int mid, vector<int> &v)
{
    int ans = 1;
    int i = 0;
    for (int j = 1; j < v.size(); j++)
    {
        if (v[j] - v[i] >= mid)
        {
            ans++;
            i = j;
        }
    }
    return ans;
}
int aggressiveCows(vector<int> &v, int k)
{
    int n = v.size();
    int low = 1;
    int ans;
    sort(v.begin(), v.end());
    int high = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (f(mid, v) >= k)
        {
            low = mid + 1;
            ans = mid;
        }
        else
            high = mid - 1;
    }
    return ans;
}