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

// deletion of head
Node *deleteHead(Node *head)
{
    if (head == nullptr)
        return head;
    Node *temp = head;
    head = head->next;
    free(temp);
    // delete temp; (we can use it in this way.)
    return head;
}

// deletion of tail of LL
Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

// to delete kth position element
Node *deleteKthElement(Node *head, int k)
{
    if (head == nullptr)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int counter = 0;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        counter += 1;
        if (counter == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// to delete element
Node *deleteElement(Node *head, int ele)
{
    if (head == nullptr)
        return head;
    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Insert Operation
// Insert at head position
Node *insertNewHead(Node *head, int ele)
{
    Node *temp = new Node(ele, head);
    return temp;
}

// Insert at last position
Node *insertNewTail(Node *head, int ele)
{
    Node *newEle = new Node(ele, nullptr);
    if (head == nullptr)
    {
        return newEle;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newEle;
    return head;
}

// Insert at Kth position
Node *insertAtKthPosition(Node *head, int k, int ele)
{
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new Node(ele);
        }
        else
        {
            return nullptr;
        }
    }
    if (k == 1)
    {
        Node *temp = new Node(ele, head);
        return temp;
    }
    int counter = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        counter += 1;
        if (counter == (k - 1))
        {
            Node *newEle = new Node(ele, temp->next);
            temp->next = newEle;
            return head;
        }
        temp = temp->next;
    }
    return head;
}

// Inserting the element before the value x
Node *insertBeforeX(Node *head, int ele, int x)
{
    if (head == nullptr)
    {

        return nullptr;
    }
    if (head->data == x)
    {
        Node *temp = new Node(ele, head);
        return temp;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->next->data == x)
        {
            Node *newEle = new Node(ele, temp->next);
            temp->next = newEle;
            return head;
        }
        temp = temp->next;
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
    // delete operation
    // head = deleteHead(head); // to delete head
    // head = deleteTail(head); // to delete tail
    // head = deleteKthElement(head, 2); // to delete kth position element
    // head = deleteElement(head, 7); // to delete particular element.

    // Insert Operation
    // head = insertNewHead(head, 1);  // insert element at head position
    // head = insertNewTail(head, 10); // insert element at tail position
    // head = insertAtKthPosition(head, 5, 6); // insert element at tail position
    head = insertBeforeX(head, 6, 7); // insert before value x
    printLL(head);
    cout << endl;
    cout << "Length of LL: " << lengthOfLL(head) << endl;
    if (searchInLL(head, 8))
    {
        cout << "element present in LL" << endl;
    }
    else
    {
        cout << "element not present in LL" << endl;
    }
    return 0;
}