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
 ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int s = 1;
        ListNode* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
            s++;
        }
         if (n == s) {
        return head->next;
    }
        s = s-n;
        temp = head;
        while(s-1){
            temp = temp->next;
            s--;
        }
        temp->next = temp->next->next;
        return head;
        
    }