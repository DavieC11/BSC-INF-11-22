#include <iostream>
using namespace std;

int main()
{
    string f_id[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
        cout << "" << endl;

    for(string Access : f_id){ 
        if(Access.size() == 2 && Access[1] == '2'){
           cout << Access << endl;
        } 

    } 
      cout << "" << endl;

    return 0;
}
