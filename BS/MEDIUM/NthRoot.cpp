#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll p(int base , int exp){
 ll res = 1;
 for(int i = 0;i<exp;i++){
    res *=base;
 }
 return res;
}
// everything is same as sqrt floor ques but instead of mid*mid here we check for p(mid , n)
int nthroot(int n , int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (p(mid ,n)== m)return mid;
        if (p(mid ,n)> m)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return high;
}
int main(){
    int n , m; cin>>n>>m;
     cout<< nthroot(n,m);
     return 0;
}