#include "Subtract_Command.h"


//int Subtract_Command::execute(Stack<int>& s_)
int Subtract_Command::execute(void)
{

        int n2 = s_.pop(), n1 = s_.pop();
        s_.push(n1-n2);


}

