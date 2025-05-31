#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
// its best approach is transposing the matrix and then reversing each row
/*
[ 1 ,2 ,3                              1 4 7
   4, 5 ,6        Its transpose is -   2 5 8 
   7 , 8 , 9 ]                         3 6 9 
*/
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