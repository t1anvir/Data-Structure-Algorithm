#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *next;
};

Node *head = 0;

void insertFirst(int x)
{
    Node *n = new Node;
    n->val = x;
    n->next = head;
    head = n;
}
void insertLast(int x)
{
    Node *n = new Node;
    n->val = x;
    Node *ptr = head;
    while (ptr->next != 0)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    n->next = 0;
}
void insert(int x, int pos)
{
    Node *n = new Node;
    n->val = x;
    Node *ptr = head;
    for (int i = 1; i <= pos - 2; i++){
        ptr = ptr->next;
    }
    n->next = ptr->next;
    ptr->next = n;
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
    insertFirst(2);
    insertLast(8);
    insert(4,2);
    dis();
}