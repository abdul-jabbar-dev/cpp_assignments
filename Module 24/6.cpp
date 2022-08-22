#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};
void createNode(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value % 2 == 0)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << temp->value << " ";
        }
        if (temp->next != NULL)
        {
            cout << "-> ";
        }
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        createNode(head, value);
    }

    print(head);
}