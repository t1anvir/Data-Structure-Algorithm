#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
Node *head = 0;
void insertLast(int x)
{
    Node *a = new Node;
    a->val = x;
    a->next = 0;
    if (head == 0)
    {
        head = a;
        return;
    }
    Node *ptr = head;
    while (ptr->next != 0)
    {
        ptr = ptr->next;
    }
    ptr->next = a;
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
    insertLast(45);
    insertLast(1);
    dis();
}