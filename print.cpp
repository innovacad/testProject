#include <iostream>    
#include <iomanip> 
#include <string.h>     

void Print (std::string input);

int main()  {

      std::cout <<"hello world!";
      Print("I'm a developer");

    return 0;
}

void Print(std::string input) {
 /* takes string 'input' as argument and prints it 
 on the center of the terminal*/
 
    std::cout <<std::setw(43); //Change the number as you like
    std::cout <<input;

    
  
}
