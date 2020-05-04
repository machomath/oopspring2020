#include <iostream>
#include "Student.h"
#include "Faculty.h"
#include "MyLinkedList.h"
#include "TemplateLinkedList.h"
using namespace std;

int main()
{
    Faculty fty1("Frank Lewis", "EE", 1239, 444);
    Faculty fty2("Brandon", "CS", 1569, 440);
    Faculty fty3("Alice", "ME", 1509, 441);

    TemplateLinkedList<Faculty> tLlFaculty;

    tLlFaculty.insertNode(fty1, 1239);
    tLlFaculty.insertNode(fty2, 1569);
    tLlFaculty.insertNode(fty3, 1509);
    tLlFaculty.printLinkedList();
    cout << "=====================" << endl;
    Student st11("Adam", "CE", 142);
    Student st12("Aron", "NE", 143);
    Student st13("Bob", "SE", 149);

    TemplateLinkedList<Student> tLlStudent;
    tLlStudent.insertNode(st11, 142);
    tLlStudent.insertNode(st12, 143);
    tLlStudent.insertNode(st13, 149);
    tLlStudent.printLinkedList();
    cout << "--------Last Lecture stuff below this line------" << endl;
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
