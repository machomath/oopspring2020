#ifndef TEMPLATELINKEDLIST_H
#define TEMPLATELINKEDLIST_H


#include <iostream>
#include "Student.h"
#include "Faculty.h"


using namespace std;
template <class T>
struct MyNode1
{
    T stu;
    int priority;
    MyNode1 * next;
};

template <class T>
class TemplateLinkedList
{
    public:
        TemplateLinkedList();
        ~TemplateLinkedList();
        void insertNode(T, int);
        string deleteNode(int);
        void printLinkedList();

    protected:

    private:
        MyNode1<T> * head;
};


#endif // TEMPLATELINKEDLIST_H
