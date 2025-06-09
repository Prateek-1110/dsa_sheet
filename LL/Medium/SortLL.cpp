#include <bits/stdc++.h>
#define cia(x) for(int i = 0; i < x.size(); i++) cin >> x[i];
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define srt(x) sort(x.begin(), x.end())
#define rsrt(x) sort(x.rbegin(), x.rend())
#define pb push_back
using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// this is brute force with time o(nlogn) and space o(n) , there are better way like o(nlogn) but o(1) space
 ListNode* sortList(ListNode* head) 
    {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        vector<int>ans;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        sort(ans.begin(),ans.end());
        for(int i  = 0;i<ans.size();i++){
            temp->val = ans[i];
            temp = temp->next;
        }
        return head;

        
    }