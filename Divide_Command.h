#ifndef _DIVIDE_COMMAND_H_
#define _DIVIDE_COMMAND_H_
#include "Expr_Command.h"


class Divide_Command: public Expr_Command
{
        public:
            
		Divide_Command (Stack <int> & s): s_(s) {prec=1;}
                virtual int execute(void);
                //Divide_Command(void);
		//virtual int execute(Stack <int> & s_);
        private:
                Stack <int> & s_;
};
#endif
