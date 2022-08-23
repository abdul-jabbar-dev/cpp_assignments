#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *Next;
    Node(int val)
    {
        data = val;
        Next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->Next != NULL)
            cout << " -> ";
        temp = temp->Next;
    }
    cout << endl;
}

void removeNode(Node *head, int M, int N)
{
    Node *remNode = head, *t;
    int count;

    while (remNode)
    {
        for (count = 1; count < M && remNode != NULL; count++)
            remNode = remNode->Next;

        if (remNode == NULL)
            return;

        t = remNode->Next;
        for (count = 1; count <= N && t != NULL; count++)
        {
            t = t->Next;
        }

        remNode->Next = t;

        remNode = t;
    }
}

int main()
{
    Node *head = NULL;
    int size, m, n;
    cin >> size >> m >> n;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        insertAtTail(head, arr[i]);
    }

    removeNode(head, m, n);

    printNode(head);

    return 0;
}
