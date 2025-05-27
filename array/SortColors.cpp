#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& v) {
    int low = 0, mid = 0, high = v.size() - 1;

    while (mid <= high) {
        if (v[mid] == 0) {
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if (v[mid] == 1) {
            mid++;
        }
        else { // v[mid] == 2
            swap(v[mid], v[high]);
            high--;
        }
    }
}
