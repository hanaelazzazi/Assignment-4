#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;

//this function takes a vector of integers v and two integers first and second as input it inserts the second integer after each occurrence of the first integer in the vector
void insertAfter(vector<int>& v, int first, int second)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == first)
        {
            v.insert(v.begin()+i+1, second);
            i++;
        }
    }
}

int main()
{
    int n;
    cout<<"Please enter the number of integers: ";
    cin>>n;
    
    //create an empty vector to store the integers
    vector<int> v;
    int num;
    
    for (int i = 0; i < n; i++)
    {
        int x=i+1;
        cout<<"Please enter integer number "<<x<< ": ";
        cin>>num;
        v.push_back(num);
    }

    int first, second;
    cout<<"Please enter the first value: ";
    cin>>first;
    cout<<"Please enter the second value: ";
    cin>>second;
    
    insertAfter(v, first, second);
    
    cout<<endl;
    
    cout<<"The vector after inserting "<<second<< " after each occurence of "<<first<<": ";
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    
    cout<<endl;
    //create a linked list from the updated vector
    LinkedList l = LinkedList::create(v);
    
    cout<<"The linked list: "<<endl;
    l.printList();
    
    cout<<"Sum of all nodes: "<<l.sumNodes()<<endl;
    cout<<endl;
    cout<<"This is the end of the program. Thank you!"<<endl;
    
    return 0;
}

