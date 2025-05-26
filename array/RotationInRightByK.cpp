#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
// for 1 2 3 4 5 6 7 and k = 3,output be like 5 6 7 1 2 3 4
// extra array is useful but we have to do it in place
void f(vi v, int k)
{
    int n = v.size();
    k = k % n;
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
}