#include <bits/stdc++.h>
using namespace std;
class LinkedList
{
public:
    int value;
    LinkedList *nextNode;
    LinkedList(int value)
    {
        this->value = value;
        this->nextNode = NULL;
    }
};
void createInTail(LinkedList *&node, int value)
{
    LinkedList *newNode = new LinkedList(value);
    if (node == NULL)
    {
        node = newNode;
        return;
    }
    LinkedList *temp = node;
    while (temp->nextNode != NULL)
    {
        temp = temp->nextNode;
    }
    temp->nextNode = newNode;
};
void createInHead(LinkedList *&node, int value)
{
    LinkedList *newNode = new LinkedList(value);
    newNode->nextNode = node;
    node = newNode;
}
void printLinkedList(LinkedList *node)
{
    while (node != NULL)
    {
        cout << node->value;
        if (node->nextNode != NULL)
        {
            cout << "->"
                 << " ";
        }
        node = node->nextNode;
    }
    cout << endl;
}
void reversedListPrint(LinkedList *node)
{
    if (node == NULL)
    {
        return;
    }
    reversedListPrint(node->nextNode);
    cout << node->value;
    if (node->nextNode == NULL)
    {
        cout << " <-";
    }
}
int main()
{
    LinkedList *head = NULL;

    // node added in tail
    createInTail(head, 5);
    // node added in head
    createInHead(head, 3);
    // print head to tail
    printLinkedList(head);
    // print tail to head
    reversedListPrint(head);
}