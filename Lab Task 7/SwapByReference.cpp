#include <iostream>
using namespace std;

// Function to swap two numbers by reference
void SwapNumbers(int& varA, int& varB) {
    int temp = varA;
    varA = varB;
    varB = temp;
}

int main() {
    int varA = 25;
    int varB = 100;
    
    cout << "\nvarA before swap: " << varA << endl; // Outputs: varA is 25
    cout << "varB before swap: " << varB << endl;  // Outputs: varB is 100 

    SwapNumbers(varA, varB);

    cout << "\nvarA after swap: " << varA << endl;  // Outputs: varA is 100
    cout << "varB after swap: " << varB << "\n" << endl; // Outputs: varB is 25 
    
    return 0; 
}
