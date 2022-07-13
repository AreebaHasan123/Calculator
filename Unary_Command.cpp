#include "Unary_Command.h"

int Unary_Command::execute(void)
{

	int n1 = s_.top();
	s_.pop();
	int topansw=this->execute();
 	s_.push(topansw);


}
