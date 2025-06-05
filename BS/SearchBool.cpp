#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> &v, int k)
{
    int n = v.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == k)
            return true;
// this tackle duplicate issue like without this we cant determine which pair is sorted(low to mid) or (mid to high)
        if (v[low] == v[mid] && v[mid] == v[high])
        {
            low++;
            high--;
        }
        else if (v[low] <= v[mid])
        {
            if (v[low] <= k && k < v[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (v[mid] < k && k <= v[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}
