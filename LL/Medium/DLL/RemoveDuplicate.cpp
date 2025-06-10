#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
Node *removeDuplicates(struct Node *head){
    Node *temp = head;
    if (!head)return nullptr;
    while (temp->next){
        if (temp->data == temp->next->data){
            Node *del = temp->next;
            temp->next = del->next;
            if (del->next){
                del->next->prev = temp;
            }
            delete del;
        }
        else
            temp = temp->next;
    }
    return head;
}