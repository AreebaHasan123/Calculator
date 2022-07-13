#include "Add_Command.h"

int Add_Command::execute(void)
{

	int n2 = s_.pop(), n1 = s_.pop();
 	s_.push(n1 + n2);


}
