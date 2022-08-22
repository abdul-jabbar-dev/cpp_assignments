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
void remainNode(Node *&head, int si, int dE)
{
    Node *temp = head;
    int index = 0;
    while (temp != NULL)
    {

        index++;
        temp = temp->next;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
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
    int k, M, N;
    cin >> k, M, N;
    for (int i = 0; i < k; i++)
    {
        int value;
        cin >> value;
        createNode(head, value);
    }
    remainNode(head, M, N);
    print(head);
}