#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int L = 20;
    int U = 100;
    for (int i = 0; i < 2; i++)
        cout << (rand() % (U - L + 1)) + L << " ";
    return 0;
}
