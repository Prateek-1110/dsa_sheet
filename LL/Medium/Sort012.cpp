#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define srt(x) sort(x.begin(), x.end())
#define rsrt(x) sort(x.rbegin(), x.rend())
#define pb push_back
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// there is other way also ( changing links of 0's ll , 1's ll , 2's ll)
ListNode *segregate(ListNode *head)
{
    if (!head || !head->next)
        return head;
    int count[3] = {0, 0, 0};
    ListNode *temp = head;
    while (temp)
    {
        count[temp->val]++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < 3; i++)
    {
        while (count[i]--)
        {
            temp->val = i;
            temp = temp->next;
        }
    }
    return head;
}