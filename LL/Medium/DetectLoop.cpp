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
 bool hasCycle(ListNode *head) 
    {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow)return true;
        }
        return false;
        
    }