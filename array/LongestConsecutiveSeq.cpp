#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
 int f(vi& v) 
    {
        int n=v.size();
        sort(v.begin(),v.end());
        int st = v[0];
        int l =1,mx =1;
        for(int i = 1;i<n;i++){
            // handle duplicates...
            if (v[i] == v[i - 1]) continue;
            if(v[i]-v[i-1]==1)l++;
            else l = 1;
            mx = max(l,mx); 
        }
        return mx;
        
    }