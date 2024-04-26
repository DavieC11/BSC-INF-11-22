#include <iostream>

int main() {
    int Num;
    std::string WNum;

    while (true) {
        std::cout << "\nEnter a number between 5 and 10: ";

        if (!(std::cin >> Num)) {
            std::cin.clear(); // clear input state
            std::cin.ignore(10, '\n'); // ignore 10 characters
            std::cout << "Invalid input. Please enter a number.\n";
        } else if (Num >= 5 && Num <= 10) {
            std::cout << "\nNumber " << Num << " is a correct number\n \n";
            break;
        } else {
            std::cout << "\nYou have entered: " << Num << std::endl;
            std::cout << "Do you want to try again?\n1. YES \n2. NO \n";

            while (true) {
                std::cin >> WNum;
                if (WNum == "1") {
                    break; // break inner loop to re-prompt the user
                } else if (WNum == "2") {
                    return 0; // exit the program
                } else {
                    std::cout << "\nInvalid input, please enter '1' or '2'.\n";
                    std::cout << "Do you want to try again?\n1. YES \n2. NO \n";
                }
            }
        }
    }

    return 0;
}
