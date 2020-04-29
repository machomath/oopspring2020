#include "MyLinkedList.h"

MyLinkedList::MyLinkedList()
{
    head = nullptr;
}

MyLinkedList::~MyLinkedList()
{
    //dtor
}

void MyLinkedList::insertNode(Student s, int p)
{
    //cout << "I am coming in the function " << endl;
    MyNode * tmp = new MyNode;
    tmp->stu = s;
    tmp->priority = p;
    tmp->next = nullptr;
    if(head == nullptr){
        //cout << "I am working " << endl;
        head = tmp;
        tmp = nullptr;
    }else{
        MyNode * current = new MyNode;
        current = head;
        while(current->priority < tmp->priority){
            if(current->next != nullptr){
                current = current->next;
            }else{
                break;
            }
        }
        tmp->next = current->next;
        current->next = tmp;
    }
}

void MyLinkedList::printLinkedList()
{
    cout << "Our LinkedList is " << endl
          << "===============" << endl;
    MyNode * tmp = head;
    while(tmp != nullptr){
        tmp->stu.printDetails();
        cout << "---------" << endl;
        tmp = tmp->next;
    }
}
