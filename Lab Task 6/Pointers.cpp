#include <iostream>
using namespace std;

int main()
{
    int firstValue;
    int secondValue;

    int *pPointer = nullptr;

    pPointer = &firstValue;
    *pPointer = 10;

    pPointer = &secondValue;
    *pPointer = 20;

    cout << "\nfirstValue is " << firstValue << endl;
    cout << "SecondVAlue is " << secondValue << endl;

    cout << endl;
}