#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
// its best approach is transposing the matrix and then reversing each row
void rotate(vvi &v){
    int n = v.size();
   for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
        swap(v[i][j],v[j][i]);
    }
   }
   for(int i = 0;i<n;i++){
    reverse(v[i].begin(),v[i].end());
   }
}