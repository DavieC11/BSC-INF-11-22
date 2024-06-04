#include <iostream>
using namespace std;

int main()
{
    int* pPointer = nullptr;

    int integerVar = 5;

    pPointer = &integerVar;

    cout << "\nOutput Value of IntegerVar: " << integerVar << endl;

    cout << "Adress of the IntegerVar: " << &integerVar << endl;

    cout << "pPointer: " << pPointer << endl;

    cout  << "Address of pPointer: " << &pPointer << endl;

    cout << "\n" << endl;

    return 0;
}