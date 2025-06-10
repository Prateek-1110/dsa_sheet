#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL) {}
};
Node *f(Node *head)
{
    Node *t = head;
    while (t->next)
    {
        t = t->next;
    }
    return t;
}
vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
{
    vector<pair<int, int>> res;
    Node *l = head;
    Node *r = f(head);
    while (l->data < r->data)
    {
        if (l->data + r->data == target)
        {
            res.push_back({l->data, r->data});
            r = r->prev;
            l = l->next;
        }
        else if (l->data + r->data > target)
        {
            r = r->prev;
        }
        else
            l = l->next;
    }
    return res;
}