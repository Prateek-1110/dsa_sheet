#include <bits/stdc++.h>
#define cia(x)                         \
    for (int i = 0; i < x.size(); i++) \
        cin >> x[i];
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
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 
Node *insertAtEnd(Node *head, int x)
{
    Node *n = new Node(x);
    if (head == nullptr) return n;
    Node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return head;
}