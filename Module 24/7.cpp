#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void displayNode(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }

    while (head != NULL)
    {
        cout << head->value;

        head = head->next;

        if (head != NULL)
        {
            cout << " > ";
        }
    }
    cout << endl;
}

void insertNode(Node *&head, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
}

Node *reverseNode(Node *head, int k)
{
    if (!head)
        return NULL;

    Node *current = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;

    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
    {
        head->next = reverseNode(next, k);
    }
    return prev;
}

int main()
{
    Node *head = NULL;
    int n, position;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        insertNode(head, a[i]);
    }

    cin >> position;
    Node *reverse = reverseNode(head, position);
    displayNode(reverse);
}
