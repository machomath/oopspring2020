#include <iostream>

using namespace std;

int iterativeFictorial(unsigned int);
int recursiveFactorial(unsigned int);

int main()
{
    cout << iterativeFictorial(5) << endl;
    cout << recursiveFactorial(6) << endl;
    cout << "Hello to the world of cpp!" << endl;
    return 0;
}

int iterativeFictorial(unsigned int n)
{
    if(n == 0) return 1;
    int factorial = 1;
    for(int i = n; i >= 1; i--){
        factorial *= i; //factorial = factorial*i;
    }
    return factorial;
}


int recursiveFactorial(unsigned int n)
{
    if(n <= 1){
        return 1;
    }else{
        return n*recursiveFactorial(n-1);
    }

}
