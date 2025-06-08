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
struct Node {
  int data;
  struct Node* next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
Node* reverseList(struct Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=next;
    }
    return prev;
}