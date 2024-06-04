#include <iostream> //Enables the use of input and output statements
#include <ctime>  //fetches the current time
#include <cstdlib> //contain function for generating random values, e.g rand() and srand()

using namespace std;

int main()
{
    srand(time(0)); //seeding the random function

    int daysUntilExpiration = rand() % 12; //Generates values int in the rang(0,11)
    cout << ""<< endl;
    /*Output for the value of daysUntilExpiration using switch*/
    switch(daysUntilExpiration){
        case 0:
            cout << "Your subscription has expired" << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;          
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in "<< daysUntilExpiration << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:  
          cout << "You have an active subscription" << endl;
          break;
    }
cout << "" << endl;

 return 0;   
}