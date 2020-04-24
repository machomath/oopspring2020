#include <iostream>
#include <fstream>

using namespace std;
using std::string;

int main()
{
    ofstream myFile("details.txt");
    cout << "Enter ID# Name and Weight" << endl;
    cout << "press Ctrl Z to quit" << endl;

    int id;
    string name;
    float weight;
    while(cin >> id >> name >> weight ){
        myFile << id << ' ' << name << ' ' << weight << endl;
    }

    ifstream myFile2("details.txt");

    while(myFile2 >> id >> name >> weight){
        cout << id << "--" << name << "--" << weight << endl;
    }
    cout << "ifstream closes automatically once end of file is reached" << endl;
    return 0;
}
