#include <iostream> //Enables the use of input and output statements
#include <ctime>  //fetches the current time
#include <cstdlib> //contain function for generating random values, e.g rand() and srand()

using namespace std;

int main()
{
    int c;
    cout << "Enter the Repetition number: ";
    cin >> c ;
    
    srand(time(0)); //seeding the random function

     for(int i = 1; i < c ; i++){
    int daysUntilExpiration = rand() % 12; //Generates values int in the rang(0,11)
    cout << ""<< endl;

    /*Output for the value of daysUntilExpiration using if-else*/
    if(daysUntilExpiration <= 0){
        cout << "Your subscription has expired" << endl;
    }else
         if(daysUntilExpiration == 1){
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }else
         if(daysUntilExpiration > 1 && daysUntilExpiration <= 5){
        cout << "Your subscription expires in "<< daysUntilExpiration << endl;
        cout << "Renew now and save 10%!" << endl;
    }else
         if(daysUntilExpiration > 5 && daysUntilExpiration <= 10){
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }else{
        cout << "You have an active subscription" << endl;
    }
    cout << "" << endl;
 }
 return 0;   
}