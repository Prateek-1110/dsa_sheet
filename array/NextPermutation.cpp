#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
 void nextPermutation(vector<int>& v) {
    int n = v.size();
    int piv = -1, rig = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (v[i] < v[i + 1]) {
            piv = i;
            break;
        }
    }

    if (piv != -1) {
        for (int j = n - 1; j > piv; j--) {
            if (v[j] > v[piv]) {
                rig = j;
                break;
            }
        }
        swap(v[piv], v[rig]);
    }

    reverse(v.begin() + piv + 1, v.end());
}
