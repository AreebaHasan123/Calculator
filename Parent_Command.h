#ifndef _PARENT_COMMAND_H_
#define _PARENT_COMANND_H_

#include "Expr_Command.h"

class Parent_Command: public Expr_Command{
	public:
		Parent_Command(Stack <int> & s): s_(s) {prec=3;};
		virtual  int execute(void);
	private:
		Stack <int> & s_;
};

#endif
