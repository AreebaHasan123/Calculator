#ifndef _EXPR_COMMAND
#define _EXPR_COMMAND
#include "Stack.h"
class Expr_Command{
	public:
		virtual int execute(void)=0;
		int precedence(void){
			return prec;	}
	protected:
		int prec;
};

#include "Expr_Command.cpp"
#endif
