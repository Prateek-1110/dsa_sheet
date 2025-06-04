#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int>f(vector<vector<int>>&v){
    int n = v.size();
    int m = v[0].size();
    int top = 0,bottom = n-1 , left = 0,right = m-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
        for(int i =left ; i<=right;i++){
            ans.pb(v[top][i]);
        }
        top++;
        for(int i = top ; i<=bottom ; i++){
            ans.pb(v[i][right]);
        }
        right--;
         if(top<=bottom){
        for(int i = right ; i>=left;i--){
            ans.pb(v[bottom][i]);
        }
        bottom--;
    }
    if(left<=right){
        for(int i = bottom ; i>=top;i--){
            ans.pb(v[i][left]);
        }
        left++;
    }
    }
    return ans;
}
int main(){
    int n , m ; 
    cin>>n>>m;
 vector<vector<int>>v(n , vector<int>(m));
 for(int i  =0;i<n;i++){
    for(int j = 0;j<m;j++){
        cin>>v[i][j];
    }
 }
 vector<int>res = f(v);
 for(int i = 0;i<res.size();i++){
    cout<<res[i]<<" ";
 }
 return 0;
}