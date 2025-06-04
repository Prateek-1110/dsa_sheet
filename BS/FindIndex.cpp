#include <bits/stdc++.h>
using namespace std;
// we have to find index of element 'k' in sorted array 
 int search(vector<int>& v, int k) 
    {
        int n = v.size();
        int low = 0; int high = n-1;
        while(low<=high){
            int mid =(low+high)/2;
            if(v[mid]==k)return mid;
            else if (v[mid]>k){
                high = mid-1;
            }
            else if (v[mid]<k) low = mid+1;
        }
        return -1;
        
    }