#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& v) {
    vector<int> ans;
    int n = v.size();
    int last = v[n - 1];
    ans.push_back(last);
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] >= last) {
            last = v[i];
            ans.push_back(v[i]);
        }
    }
    reverse(ans.begin(), ans.end()); 
    return ans;
}

