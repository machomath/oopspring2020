#include <iostream>
#include "Student.h"
#include "MyLinkedList.h"
using namespace std;

int main()
{
    MyLinkedList linkedList1;
    Student st1("Jose", "CS", 123);
    //st1.printDetails();
    Student st2("Frank", "EE", 127);
    Student st3("Abraham", "CS", 125);
    linkedList1.insertNode(st1, st1.getKID());
    linkedList1.insertNode(st2, st2.getKID());
    linkedList1.insertNode(st3, st3.getKID());

    linkedList1.printLinkedList();
    return 0;
}
