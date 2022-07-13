#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Num_Command.h"
#include "Modulus_Command.h"
#include "Unary_Command.h"
//#include "Parent_Command.h"
#include "Stack.h"
#include "Expr_Command_Factory.h"

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
    public:
	//virtual ~Stack_Expr_Command_Factory();
	Stack_Expr_Command_Factory (Stack <int> & stack);
        virtual Num_Command * create_num_command (int num);
        virtual Add_Command * create_add_command (void);
        virtual Subtract_Command * create_subtract_command (void);
    	virtual Multiply_Command * create_multiply_command(void);
	virtual Divide_Command * create_divide_command(void);
	virtual Modulus_Command * create_modulus_command(void);
   	virtual Unary_Command * create_unary_command(void); 
	virtual Parent_Command * create_parent_command(void);
   private:
        Stack <int> & stack_;
};
//#include "Stack_Expr_Command_Factory.cpp"
#endif 
