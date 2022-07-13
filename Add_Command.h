#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_
#include "Expr_Command.h"


class Add_Command: public Expr_Command{
	public:
		//Add_Command(void);
		//virtual int execute (Stack <int> & s_);		
		Add_Command (Stack <int> & s): s_(s) {prec=0;}
		virtual int execute(void);
	private:
		Stack <int> & s_;	
};
#endif
