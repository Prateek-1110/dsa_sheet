#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while(left < right){
        int mid = (left + right)/2;
        // Check if mid is at the start of a pair
        if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || 
           (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
            left = mid + 1; // Move to the right half
        else
            right = mid; // Move to the left half (including mid)
    }
    return nums[right];// nums[left] also works
}
