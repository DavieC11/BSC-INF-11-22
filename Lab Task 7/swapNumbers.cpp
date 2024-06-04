#include <iostream>
#include <tuple> // For returning multiple values
using namespace std;

// Function that returns a tuple with swapped values
tuple<int, int> SwapNumbers(int varA, int varB) {
    return make_tuple(varB, varA); // Return the swapped values as a tuple
}

int main() {
    int varA = 25; // Initialize varA
    int varB = 100; // Initialize varB
    
    cout << "\nvarA before swap: " << varA << endl; // Outputs: 25
    cout << "varB before swap: " << varB << endl;  // Outputs: 100 

    // Call the SwapNumbers function and get the swapped values
    tie(varA, varB) = SwapNumbers(varA, varB);

    cout << "\nvarA after swap: " << varA << endl;  // Outputs: 100
    cout << "varB after swap: " << varB << "\n" << endl; // Outputs: 25
    
    return 0; 
}
