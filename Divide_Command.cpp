#include "Divide_Command.h"

//Divide_Command::Divide_Command(void)

//{}
int Divide_Command::execute(void)
{
    // COMMENT: Your code will crash if you have divide by 0.
    // ADDRESSED: My code will now catch the error 


	int n2 = s_.pop(), n1 = s_.pop();
        s_.push(n1/n2);	
	if(n2 == 0){
		std::cout << "can't be devided by zero \n";
		throw std::runtime_error("Division by zero");
	}
	/*n2 = s_.pop(), n1 = s_.pop();
        s_.push(n1/n2);*/
}
