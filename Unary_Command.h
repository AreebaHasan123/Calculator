#ifndef _UNARY_COMMAND_H_
#define _UNARY_COMMAND_H_
#include "Expr_Command.h"


class Unary_Command: public Expr_Command{
	public:
		Unary_Command(Stack<int> & s): s_(s) {};
		virtual int execute(void);
	private:
		Stack <int> & s_;
		
};
#endif
