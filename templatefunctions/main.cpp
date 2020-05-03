#include <iostream>

using namespace std;
int add1(int, int);
float add1(float, float);

template <class T>
T add2(T a, T b){
        return a + b;
}

int main()
{
    int w = 20;
    int x = 40;
    float y = 20.5;
    float z = 30.1;
    cout << "------Adding by using overloaded functions" << endl;
    cout << "Sum is: " << add1(w, x) << endl;
    cout << "Sum is: " << add1(y, z) << endl;
    cout << "---------Doing with template functions ----------" << endl;

    cout << "Sum is: " << add2<int>(w, x) << endl;
    cout << "Sum is: " << add2<float>(y, z) << endl;

    return 0;
}

int add1(int a, int b){
        return a + b;
}

float add1(float a, float b){
        return a + b;
}



