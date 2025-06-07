#include <bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int> &v, int k)
{
    int miss = 0;
    int curr = 1;
    int i = 0;
    while (true)
    {
        if (i < v.size() && v[i] == curr)
            i++;
        else
        {
            miss++;
            if (miss == k)
                return curr;
        }
        curr++;
    }
}