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

int f(int mid, vector<int> &v)
{
    int n = v.size();
    int ans = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
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
int findPages(vector<int> &v, int k)
{
    int n = v.size();
    if (k > n)
        return -1;
    int low = *max_element(v.begin(), v.end());
    int high = accumulate(v.begin(), v.end(), 0);
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (f(mid, v) <= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
