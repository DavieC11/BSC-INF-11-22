#include <iostream>
using namespace std;

int main()
{
    int numbersArray[5];
    int *pPointer = nullptr;

    pPointer = numbersArray ;

    *pPointer = 10;
    pPointer ++ ;

    *pPointer = 20;
    pPointer = &numbersArray[2];

    *pPointer = 30;
    pPointer = numbersArray + 3 ;

    *pPointer = 40;

    pPointer = numbersArray;

    *(pPointer + 4) = 50;

    for(int Arrays : numbersArray){
        cout << "\nThe array NumbersArray: " << Arrays;
    }
    return 0;
}