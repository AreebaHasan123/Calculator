#ifndef _MODULUS_COMMAND_H_
#define _MODULUS_COMMAND_H_
#include "Expr_Command.h"


class Modulus_Command: public Expr_Command{
	public:
		//Add_Command(void);
		//		//virtual int execute (Stack <int> & s_);		
		Modulus_Command (Stack <int> & s): s_(s) {prec=1;}
		virtual int execute(void);
	private:
		Stack <int> & s_;	
};
#endif
