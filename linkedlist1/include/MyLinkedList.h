#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H
#include <iostream>
#include "Student.h"

struct MyNode
{
    Student stu;
    int priority;
    MyNode * next;
};

class MyLinkedList
{
    public:
        MyLinkedList();
        ~MyLinkedList();
        void insertNode(Student, int);
        void printLinkedList();

    protected:

    private:
        MyNode * head;
};

#endif // MYLINKEDLIST_H
