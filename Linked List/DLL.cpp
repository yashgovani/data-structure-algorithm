#include <bits/stdc++.h>
using namespace std;
// we can define using struct Node as well
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

// Convert array into doubly linked list
Node *convetArrToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Print doubly linked list
void printDLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Delete Operation
// Remove the head of DLL
Node *removeHeadOfDLL(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        free(head);
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    free(temp);
    return head;
}

// Remove the tail of DLL
Node *removeTailOfDLL(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        free(head);
        return nullptr;
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *temp = tail->prev;
    tail->prev = nullptr;
    temp->next = nullptr;
    free(tail);
    return head;
}

// Deletion of the Kth node of the DLL
Node *removeTheKthNodeOfDLL(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    int counter = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        counter += 1;
        if (counter == k)
            break;
        temp = temp->next;
    }
    Node *back = temp->prev;
    Node *front = temp->next;
    if (back == nullptr && front == nullptr)
    {
        return nullptr;
    }
    else if (back == nullptr)
    {
        return removeHeadOfDLL(head);
    }
    else if (front == nullptr)
    {
        return removeTailOfDLL(head);
    }
    back->next = front;
    front->prev = back;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}

// Deletion of a given node (node never going to be head)
void removeTheGivenNodeOfDLL(Node *temp)
{
    Node *back = temp->prev;
    Node *front = temp->next;
    if (front == nullptr)
    {
        back->next = nullptr;
        temp->prev = nullptr;
        free(temp);
    }
    back->next = front;
    front->prev = back;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
}

// Insert Operations
// Insert a element before head
Node *insertEleBeforeHead(Node *head, int val)
{
    if (head == nullptr)
    {
        return new Node(val);
    }
    Node *newVal = new Node(val, head, nullptr);
    head->prev = newVal;
    return newVal;
}

// Insert a element before tail
Node *insertEleBeforeTail(Node *head, int val)
{
    if (head->next == nullptr)
    {
        return insertEleBeforeHead(head, val);
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *newEle = new Node(val, tail, tail->prev);
    tail->prev->next = tail->prev = newEle;
    return head;
}

int main()
{
    vector<int> arr = {5, 15, 25, 35, 45, 55, 65, 75, 85};
    Node *head = convetArrToDLL(arr);

    // Delete Operation
    // head = removeHeadOfDLL(head); // Remove the head of dll
    // head = removeTailOfDLL(head); // Remove the tail of dll
    // head = removeTheKthNodeOfDLL(head, 9); // Remove the tail of dll
    // removeTheGivenNodeOfDLL(head->next->next); // Deletion of a given node

    // Insert Operation
    // head = insertEleBeforeHead(head, 1); // Insert a value before head
    head = insertEleBeforeTail(head, 80); // Insert a value before tail
    printDLL(head);
    return 0;
}