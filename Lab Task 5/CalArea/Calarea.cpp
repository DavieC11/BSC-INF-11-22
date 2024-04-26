#include <iostream>

using namespace std;

int squareArea(int leng) {
    return leng * leng;
}

int rectArea(int leng, int widt) {
    return leng * widt;
}

int triArea(int base, int height) {
    return 0.5 * base * height;
}

int main() {
    int input;
    int l, b, w, h;

    while (true) {
        cout << "\nPlease select the area of the shape to calculate" << endl;
        cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\n";
        cout << "\nEnter Selection: ";

        cin >> input;

             if (input == 1) {
            cout << "\nEnter Length: ";
            cin >> l;

            cout << "\nArea of the square: " << squareArea(l) << endl;
        } else 
             if (input == 2) {
            cout << "\nEnter Length: ";
            cin >> l;

            cout << "\nEnter Width: ";
            cin >> w;

            cout << "\nArea of the rectangle: " << rectArea(l, w) << endl;
        } else 
             if (input == 3) {
            cout << "\nEnter Base Length: ";
            cin >> b;

            cout << "\nEnter Height: ";
            cin >> h;
            
            cout << "\nArea of the triangle: " << triArea(b, h) << endl;
        } else 
             if (input == 4) {
            cout << "\nExiting the program. Goodbye!\n \n";
            break;
        } else {
            cout << "\nYour input was: " << input << " which is an invalid input\n";
            cout << "Please enter a valid input\n";
        }
    }

    return 0;
}
