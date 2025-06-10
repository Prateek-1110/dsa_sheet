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
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* t1 = l1 ;
         ListNode*t2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0;
        while(t1 !=NULL || t2 != NULL){
            int sum = carry;
            if(t1) sum +=t1->val;
            if(t2) sum +=t2->val;
            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;
            curr->next = newnode;
            curr = curr->next;
            if(t1) t1 = t1->next;
            if(t2) t2= t2->next;
        }
        if(carry){
            ListNode* newnode = new ListNode (carry);
            curr ->next = newnode;
        }
        return dummy->next;
    }