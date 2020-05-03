#include <iostream>
#include "Student.h"
#include "MyLinkedList.h"
using namespace std;

int main()
{
    MyLinkedList linkedList1;
    cout << linkedList1.deleteNode(125) << endl;
    Student st1("Jose", "CS", 123);
    //st1.printDetails();
    Student st2("Frank", "EE", 127);
    Student st3("Abraham", "CS", 125);
    Student st4("John", "ME", 137);
    Student st5("Alice", "CE", 145);

    linkedList1.insertNode(st1, st1.getKID());
    linkedList1.insertNode(st2, st2.getKID());
    linkedList1.insertNode(st3, st3.getKID());

    cout << linkedList1.deleteNode(123) << endl;

    linkedList1.insertNode(st4, st4.getKID());
    linkedList1.insertNode(st5, st5.getKID());

    cout << linkedList1.deleteNode(137) << endl;
    cout << linkedList1.deleteNode(167) << endl;
    linkedList1.printLinkedList();

    return 0;
}
