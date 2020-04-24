#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream firstFileStream;
    firstFileStream.open("testing123.txt");
    //the above two lines can be combined into the following one line
    //ofstream firstFileStream("testing123.txt");
    if(firstFileStream.is_open()){
        cout << "Open" << endl;
    }else{
        cout << "Not open" << endl;
    }
    firstFileStream << "Hello testing 1 2 3, hello hello hello \n";
    firstFileStream << "again and again\n";
    firstFileStream << "Every time it runs the file header starts writing in the end \n";
    firstFileStream.close();
    return 0;
}
