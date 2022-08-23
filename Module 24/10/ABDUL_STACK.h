#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *next;
    Node *prev;
    Node(N val)
    {
        value = val;
        prev = NULL;
        next = NULL;
    }
};
template <typename M>
class myStack
{
    Node<M> *head = NULL;
    Node<M> *top = NULL;
    int count = 0;

public:
    // push
    void push(M value)
    {
        Node<M> *newNode = new Node<M>(value);
        if (head == NULL)
        {
            head = top = newNode;
            this->count++;
            return;
        }
        if (head == top)
        {
            top->next = newNode;
            newNode->prev = head;
            top = newNode;
            this->count++;
            return;
        }
        else
        {
            top->next = newNode;
            newNode->prev = head;
            top = newNode;
            this->count++;
            return;
        }
    }
    // mid
    M mid()
    {
        Node<M> *cen = head;
        int center = 0;

        while (center != count / 2)
        {
            cen = cen->next;
            center++;
        }
        return cen->value;
    }
    // pop
    M pop()
    {
        M getValue;
        Node<M> *deletedValue = top;
        if (head == NULL)
        {
            cout << "No element for pop" << endl;
            return -1;
        }
        getValue = deletedValue->value;
        if (head == top)
        {
            top = head = NULL;
            delete deletedValue;
            count--;
            return getValue;
        }

        Node<M> *temp = head;
        while (temp->next != deletedValue)
        {
            temp = temp->next;
        }
        top = temp;
        temp->next = NULL;
        delete deletedValue;
        count--;
        return getValue;
    }
    // top value
    int topValue()
    {
        if (top == NULL)
        {
            cout << "No value founded" << endl;
            return -1;
        }
        return top->value;
    }
    // size
    int size()
    {
        return count;
    }
    //  empty
    bool isEmpty()
    {
        if (count == 0)
            return false;
        else
            return true;
    }
};
