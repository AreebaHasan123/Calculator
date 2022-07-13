#ifndef _OPERATION_H_
#define _OPERATION_H_

#include "Array.h"
#include "Basic_Array.h"
#include "Stack.h"
#include "Array_Iterator.h"
#include "Expr_Command.h"
#include "Stack_Expr_Command_Factory.h"
#include "Expr_Command_Factory.h"
#include <stdexcept>
#include <cstdlib>
#include <iostream>
#include <sstream>


class Operation{
	public:
		Operation(void);
		bool infix_to_postfix(const std::string & infix, Expr_Command_Factory & factory, Array <Expr_Command *> & postfix);
		int evaluate_postfix (Array_Iterator<Expr_Command *> & iter);
		int calculate();
		
};
#endif
