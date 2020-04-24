#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter full name" << endl;
    string fullName;

    getline(cin, fullName);
    cout << "By using getline we got: " << fullName << endl;

    cout << "The length of your name is: " << fullName.length() << endl;
    cout << "The character at location 3 is: " << fullName.at(3) << endl;
    cout << "The combination nk is at location: " << fullName.find("nk") << endl;
    cout << "The substring of your input from 2 to 7 is:" << fullName.substr(2, 7) << endl;

    //string name;
    //cout << "Please enter your name" << endl;
    //cin >> name;
    //cout << "The Input string is: " << name << endl;
    //cout << "cin gets up the first white space" << endl;

    //cout << "If we want to get the entire line then use getline" << endl;
    return 0;
}
