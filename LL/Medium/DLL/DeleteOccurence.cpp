#include <bits/stdc++.h>
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
void deleteAllOccurOfX(struct Node **head_ref, int x){
    Node *temp = *head_ref;
    while (temp != NULL){
        if (temp->data == x){
            if (temp == *head_ref){
                *head_ref = temp->next;
            }
            Node *nextn = temp->next;
            Node *prevn = temp->prev;
            if (nextn != NULL) nextn->prev = prevn;
            if (prevn != NULL) prevn->next = nextn;
            free(temp);
            temp = nextn;
        } else temp = temp->next;
    }
}