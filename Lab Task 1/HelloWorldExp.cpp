#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the c++ extension!"};

    for (const string& word : msg)
    {
         cout << word << " " ; 
    }
    cout << endl;

    return 0;
}