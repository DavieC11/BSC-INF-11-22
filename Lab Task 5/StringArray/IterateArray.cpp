#include <iostream>
using namespace std;

int main()
{      //initializing an array
    string f_id[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
       cout << "" << endl;
       //The for loop accesses all of the elements of thr array
    for(string Access : f_id){ 
        if(Access[0] == 'B'){
           cout << Access << endl;
        } 
        /*Access is a variable that is holding the arrays
            Access[0] checks stores every element whose first
             letter is B into the variable B
             Then the element held in access are printed out*/
    }
      cout << "" << endl;

    return 0;
}
