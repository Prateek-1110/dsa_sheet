#include <bits/stdc++.h>
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
    Node(int x){
        data = x;
        next = NULL;
    }
};
// Function to find the length of a loop in the linked list.
int countNodesinLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    // int cnt = 0;
    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            int count = 1;
            Node *temp = slow->next;
            while (temp != slow)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }
    }
    return 0;
}