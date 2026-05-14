#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
Node *head = 0;
void insertFirst(int x)
{
    Node *a = new Node;
    a->val = x;
    a->next = head;
    head = a;
}
void dis()
{
    Node *ptr = head;
    while (ptr != 0)
    {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }
}
int main()
{
    insertFirst(5);
    dis();
}