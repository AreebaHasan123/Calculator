#include "Modulus_Command.h"

int Modulus_Command::execute(void)
{

	int n2 = s_.pop(), n1 = s_.pop();
 	s_.push(n1 % n2);


}
