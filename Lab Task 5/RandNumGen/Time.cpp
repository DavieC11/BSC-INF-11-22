#include <iostream>
#include <ctime> // For time() function

int main() {
    // Get the current time
    time_t currentTime = time(0);

    // Convert the current time to a string representation
    char* timeString = ctime(&currentTime);

    // Output the current time
    std::cout << "Current time: " << timeString;

    return 0;
}
