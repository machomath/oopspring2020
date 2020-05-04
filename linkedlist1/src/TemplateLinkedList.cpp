#include "TemplateLinkedList.h"

template class TemplateLinkedList<Student>;
template class TemplateLinkedList<Faculty>;

template <class T>
TemplateLinkedList<T>::TemplateLinkedList()
{
    head = nullptr;
}
template <class T>
TemplateLinkedList<T>::~TemplateLinkedList()
{
    //dtor
}
template <class T>
void TemplateLinkedList<T>::insertNode(T s, int p)
{
    //cout << "I am coming in the function " << endl;
    MyNode1<T> * tmp = new MyNode1<T>;
    tmp->stu = s;
    tmp->priority = p;
    tmp->next = nullptr;
    if(head == nullptr){
        //cout << "I am working " << endl;
        head = tmp;
        tmp = nullptr;
    }else{
        MyNode1<T> * current = new MyNode1<T>;
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
template <class T>
void TemplateLinkedList<T>::printLinkedList()
{
    cout << "Our LinkedList is " << endl
          << "===============" << endl;
    MyNode1<T> * tmp = head;
    while(tmp != nullptr){
        tmp->stu.printDetails();
        cout << "---------" << endl;
        tmp = tmp->next;
    }
}
template <class T>
string TemplateLinkedList<T>::deleteNode(int p)
{
    if(head == nullptr){
        return "The list is empty";
    }
    if(head->priority == p){
        MyNode1<T> * tmp = head;
        head = head->next;
        tmp = nullptr;
        return "The head node got deleted";
    }
    if(head->next != nullptr){
        MyNode1<T> * ptr1 = head;
        MyNode1<T> * ptr2 = head->next;
        while(ptr2 != nullptr){
            if(ptr2->priority == p){
                ptr1->next = ptr2->next;
                ptr2 = nullptr;
                return "Node deleted";
            }else{
                ptr2 = ptr2->next;
                ptr1 = ptr1->next;
            }
        }
        return "Node Not Found";
    }else{
        return "No such node";
    }
}

