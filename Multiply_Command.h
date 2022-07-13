#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_
#include "Expr_Command.h"


class Multiply_Command: public Expr_Command
{
        public:
		Multiply_Command (Stack <int> & s): s_(s) {prec=1;}
                virtual int execute(void);
                //Multiply_Command(void);
		//virtual int execute(Stack<int> & s_);
        private:
                Stack <int> & s_;

};
#endif
