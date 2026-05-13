#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *head = 0;

void insrt(int x)
{
    Node *nn = new Node;
    nn->val = x;
    nn->next = 0;

    if (head == 0)
    {
        head = nn;
        return;
    }
    Node *ptr = head;
    while (ptr->next != 0)
    {
        ptr = ptr->next;
    }
    ptr->next = nn;
}

void del(int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *ptr = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        ptr = ptr->next;
    }
    Node *target = ptr->next;
    Node *temp = target;
    ptr->next = target->next;
    delete temp;
}

void Srch(int x)
{
    Node *ptr = head;
    int pos = 1;

    while (ptr != 0)
    {
        if (ptr->val == x)
        {
            cout << "found at position " << pos << endl;
            return;
        }
        ptr = ptr->next;
        pos++;
    }
    cout << "not found" << endl;
}

void srt()
{
    if (head == 0)
        return;
    Node *ptrFront, *ptrBack;
    int temp;
    for (ptrFront = head; ptrFront != 0; ptrFront = ptrFront->next)
    {
        for (ptrBack = head; ptrBack->next != 0; ptrBack = ptrBack->next)
        {
            if (ptrBack->val > ptrBack->next->val)
            {
                temp = ptrBack->val;
                ptrBack->val = ptrBack->next->val;
                ptrBack->next->val = temp;
            }
        }
    }
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
    int n;
    cout << "Numbers of elements to insert in Linked list: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int el;
        cout << "Input a number : ";
        cin >> el;
        insrt(el);
    }

    srt();

    int x, y;

    cout << "HERE IS THE MENU" << endl;
    cout << "1. Insert" << endl;
    cout << "2. Delete" << endl;
    cout << "3. Search" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;

    while (true)
    {

        cout << "Enter your choice: ";
        cin >> x;

        switch (x)
        {

        case 1:
            cout << "Enter the value to insert: ";
            cin >> y;
            insrt(y);
            srt();
            break;

        case 2:
            cout << "Enter the value's position to delete: ";
            cin >> y;
            del(y);
            break;

        case 3:
            cout << "Enter the value to search: ";
            cin >> y;
            Srch(y);
            break;

        case 4:
            dis();
            break;

        case 5:
            cout << "Good to see you, sayonara!" << endl;
            return 0;

        default:
            cout << "You choose the wrong number!" << endl;
        }
    }
    return 0;
}