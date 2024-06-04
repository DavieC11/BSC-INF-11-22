#include <iostream>

#include <fstream>

using namespace std;

int main()
{
    ofstream myFile("exampleFile.txt");

if(myFile .is_open())

{

    myFile<< " This is a line .\n";

    myFile<< "This is another line .\n";

    myFile.close();

}
 
 else

 {

   cout<<"Unable to open a file";
 }

return 0;

}