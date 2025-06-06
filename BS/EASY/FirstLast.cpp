#include<bits/stdc++.h>
using namespace std;
#include <vector>
using namespace std;
// find first , last occurence of 'k' in sorted array 
int f (vector<int>& nums, int target, bool findFirst) {
    int low = 0, high = nums.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            if (findFirst) high = mid - 1;  // keep going left
            else low = mid + 1;             // keep going right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

vector<int> searchRange(vector<int>& v, int k) {
    int first = f(v, k, true);
    int last = f(v, k, false);
    return {first, last};
}
