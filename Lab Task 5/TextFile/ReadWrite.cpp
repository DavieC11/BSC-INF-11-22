#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
    ifstream read("input.txt");
    if (!read.is_open()) {
        cerr << "\nCannot open file\n" << endl;
        return 1;
    }

    string fileData;
    getline(read, fileData);
    read.close();

    int vowelCount = 0;
    string vowels = "aeiouAEIOU";
    for (char c : fileData) {
        if (vowels.find(c) != string::npos) {
            vowelCount++;
        }
    }

    istringstream steamLine(fileData);
    int wordCount = 0;
    string word;
    while (steamLine >> word) {
        wordCount++;
    }

    string reversed(fileData.rbegin(), fileData.rend());

    steamLine.clear();
    steamLine.str(fileData);
    string capitalizedText;
    while (steamLine >> word) {
        if (word.length() > 1) {
            word[1] = toupper(word[1]);
        }
        if (!capitalizedText.empty()) {
            capitalizedText += " ";
        }
        capitalizedText += word;
    }

    cout << "\nVowels: " << vowelCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Reversed: " << reversed << endl;
    cout << "Capitalized: " << capitalizedText << "\n" << endl;

    return 0;
}
