#include <iostream>
#include <limits>

using namespace std;

int main() {
    int input;

    while (true) {                //loops until the if(true)
        cout << "\nEnter an integer value between 5 and 10: ";
        if (!(cin >> input)) {   //This line checks if the input in not an integer
            cout << "\nSorry, you entered an invalid number, Please try again.\n";
             cin.clear();        //clears an error flag associated with cin
             cin.ignore(10 , '\n');  //This ignores the input string with a length of 10 char and terminates when it sees a newline in the input
        } else if (input < 5 || input > 10) {  //checks the input for the values less than 5 and greater than 10
            cout << "\nyou entered " << input << " Please enter a number between 5 and 10.\n";
        } else {
            cout << "\nYour input value (" << input << ") has been accepted\n"<< endl;
            break;
        }
    }

    return 0;
}
