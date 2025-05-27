#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& v, int k) 
 {
        int n = v.size();
        map<int,int>mpp;
        vector<int>ans;
        for(int i= 0;i<n;i++){
            if(mpp.find(k-v[i])!=mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[k-v[i]]);
            }
            else mpp[v[i]]=i;
        }
    return ans;
}
// time complexity is o(nlogn) , o(n) for traversal and logn for mpp.find 
// if we use unordered_map , we have overall time complexity as o(n)
// space complexity is o(ans.size()) , here it is 2 so o(2)