#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    head=NULL;
}

void LinkedList::addNode(int value, int count)
{
    Node* newNode=new Node;
    newNode->value=value;
    newNode->count=count;
    newNode->next=head;
    head=newNode;
}

void LinkedList::deleteNode(int value)
{
    Node* current =head;
    Node* previous= NULL;

    //iterate through the list until the current node is NULL or the current node's value is equal to the given value
    while (current != NULL && current->value != value)
    {
        previous= current;
        current =current->next;
    }

    if (current==NULL)
    {
        cout<<"The node is not found!"<<endl;
    }
    else
    {
        if (previous==NULL)
        {
            head=current->next;
        }
        else
        {
            previous->next=current->next;
        }
        delete current;
    }
}

void LinkedList::printList()
{
    Node* current= head;
    while (current != NULL)
    {
        cout<<current->value <<" is repeated "<<current->count<<" times."<<endl;
        current = current->next;
    }
    cout<<endl;
}

LinkedList LinkedList::create(vector<int> v)
{
    LinkedList l;
    for (int i = 0; i<v.size(); i++)
    {
        int value =v[i];
        int count= 1;
        int x= i+1;
        for (int j = x; j <v.size(); j++)
        {
            if (v[j]== value)
            {
                count++;
                v.erase(v.begin()+j);
                j--;
            }
        }
        l.addNode(value, count);
    }
    return l;
}

int LinkedList::sumNodes()
{
    Node* current= head;
    int sum = NULL;
    while (current != NULL)
    {
        sum = sum + current->value * current->count;
        current= current->next;
    }
    return sum;
}

