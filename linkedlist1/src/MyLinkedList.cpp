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
    cout << "I am coming in the function " << endl;
    MyNode * tmp;
    tmp->stu = s;
    tmp->priority = p;
    tmp->next = nullptr;
    if(head == nullptr){
        cout << "I am working " << endl;
        head = tmp;
        tmp = nullptr;
    }else{
        //work in progress
    }
}

void MyLinkedList::printLinkedList()
{
    cout << "Our LinkedList is " << endl;
    //MyNode * tmp = head;
    //while(tmp != nullptr){
        //tmp->stu.printDetails();
        //cout << "---------" << endl;
        //tmp = tmp->next;
    //}
}
