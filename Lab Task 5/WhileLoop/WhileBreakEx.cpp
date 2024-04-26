#include <iostream>

int main()
{

int i;
std::cin >> i;

while (true) //Breaks when if statement is true
{
    if(i == 10){
        std::cout << "HELLO THERE" << std::endl;
        break; //breaks the loop else runs forever
    }else{
       std::cout << "HELLO THERE" << std::endl;
       i++; //keeps executing until if is true
    }
}

}