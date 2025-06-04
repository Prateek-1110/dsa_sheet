#include <bits/stdc++.h>
using namespace std;
// we have to find  smallest index in the sorted array where the element is greater than or equal to the given number.
int lowerBound(vector<int> &v, int k)
{
    int n = v.size();
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (v[mid] >= k)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return h + 1;
}