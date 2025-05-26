#include<bits/stdc++.h>
using namespace std;
// we have to find no. of subarray with product<k (strictly less than)
// we use sliding window and whenver product>k , we shrink it from left(start)
int f (vector<int>& v, int k) {
    if (k <= 1) return 0;
    int n = v.size();
    int cnt = 0, prod = 1,start = 0;
    for(int i = 0; i < n; i++) {
        prod *= v[i];
        while (prod >= k && start <= i) {
            prod /= v[start++];
        }
        cnt += i - start + 1;
    }
    return cnt;
}
