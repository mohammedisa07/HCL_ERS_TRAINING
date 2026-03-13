#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insert(Node*& head,int data)
{
    Node* newNode = createNode(data);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void findPairs(Node* head,int target)
{
    Node* first = head;
    Node* second = head;

    while(second->next != NULL)
        second = second->next;

    cout<<"\nPairs with sum "<<target<<":\n";

    while(first != second && second->next != first)
    {
        int sum = first->data + second->data;

        if(sum == target)
        {
            cout<<first->data<<" + "<<second->data<<endl;
            first = first->next;
            second = second->prev;
        }
        else if(sum < target)
        {
            first = first->next;
        }
        else
        {
            second = second->prev;
        }
    }
}

void printList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ⇄ ";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

int main()
{
    Node* head = NULL;

    int n,x,target;

    cout<<"Enter number of nodes: ";
    cin>>n;

    cout<<"Enter sorted elements:\n";

    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(head,x);
    }

    cout<<"\nDoubly Linked List:\n";
    printList(head);

    cout<<"Enter target sum: ";
    cin>>target;

    findPairs(head,target);
}