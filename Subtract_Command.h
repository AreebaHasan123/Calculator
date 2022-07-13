#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_
#include "Expr_Command.h"


class Subtract_Command: public Expr_Command
{
        public:
		Subtract_Command (Stack <int> & s): s_(s) {prec=0;}
                virtual int execute(void);
                //Subtract_Command(void);
		//virtual int execute(Stack<int> & s_);
        private:
                Stack <int> & s_;
};

#endif
