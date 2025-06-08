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
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x){
        data = x;
        next = prev = NULL;
    }
};
Node *addNode(Node *head, int pos, int data){
    if (head == NULL) return head;
    Node *temp = head;
    int count = 0;
    while (temp != NULL && count < pos){
        temp = temp->next;
        count++;
    }
    if (temp == NULL)return head;
    Node *newNode = new Node(data);
    if (temp->next == NULL){
        temp->next = newNode;
        newNode->prev = temp;
    }
    else{
        Node *front = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = front;
        front->prev = newNode;
    }
    return head;
}
