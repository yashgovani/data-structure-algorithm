#include <bits/stdc++.h>
using namespace std;
// we can define using struct Node as well

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int lengthOfLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        temp = temp->next;
        count += 1;
    }
    return count;
}

bool searchInLL(Node *head, int search)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == search)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

Node *convetArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{
    // Node y = Node(2, nullptr);
    // Node *y = new Node(2);
    // cout << y->next;
    vector<int> arr = {2, 5, 7, 8};
    Node *head = convetArrToLL(arr);
    printLL(head);
    cout << endl;
    cout << "Length of LL: " << lengthOfLL(head) << endl;
    if (searchInLL(head, 15))
    {
        cout << "element present in LL" << endl;
    }
    else
    {
        cout << "element not present in LL" << endl;
    }
    return 0;
}