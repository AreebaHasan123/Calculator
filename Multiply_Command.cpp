#include "Multiply_Command.h"

//Multiply_Command::Multiply_Command(void)

//{}
//int Multiply_Command::execute(Stack<int>& s_)
int Multiply_Command::execute(void)
{

        int n2 = s_.pop(), n1 = s_.pop();
        s_.push(n1 * n2);


}
