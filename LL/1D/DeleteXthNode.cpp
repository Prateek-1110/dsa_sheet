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
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *deleteNode(Node *head, int x)
{
    Node *temp = head;
    if (temp == nullptr)return nullptr;
    if (x == 1){
        head = temp->next;
        delete temp;
        return head;
    }
    // reaching just previous node that need to be deleted
    for (int i = 1; i < x - 1; i++){
        temp = temp->next;
    }
    if (temp != NULL){
        Node *y = temp->next; // to be deleted
        temp->next = temp->next->next;
        delete y;
    }else return nullptr; // this means x> length of ll 
    return head;
}