#include <iostream>
#include "Student.h"
#include "MyLinkedList.h"
using namespace std;

int main()
{
    MyLinkedList linkedList1;
    Student st1("Jose", "CS", 123);
    //st1.printDetails();

    linkedList1.insertNode(st1, st1.getKID());
    linkedList1.printLinkedList();
    return 0;
}