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
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode * t1 = headA;
          ListNode * t2 = headB;
         while (t1 != t2) {
        t1 = t1 ? t1->next : headB;
        t2 = t2 ? t2->next : headA;
    }
          return t1;
    }