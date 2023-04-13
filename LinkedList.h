#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <vector>
using namespace std;

class LinkedList
{
private:
    //head is a pointer to the first node in the list
    Node* head;
public:
    LinkedList();
    void addNode(int value, int count);
    void deleteNode(int value);
    void printList();
    static LinkedList create(vector<int> v);
    int sumNodes();
};

#endif

