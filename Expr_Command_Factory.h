#ifndef _EXPR_COMMAND_FACTORY_H
#define _EXPR_COMMAND_FACTORY_H
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Num_Command.h"
#include "Modulus_Command.h"
#include "Unary_Command.h"
#include "Parent_Command.h"
class Expr_Command_Factory{
    public:
        //virtual ~Expr_Command_Factory(void)=0;
        virtual Num_Command * create_num_command(int num)=0;
        virtual Add_Command * create_add_command(void)=0;
        virtual Subtract_Command * create_subtract_command(void)=0;
    	virtual Multiply_Command * create_multiply_command(void)=0;
	virtual Divide_Command * create_divide_command(void)=0;
	virtual Modulus_Command * create_modulus_command(void)=0;	
    	virtual Unary_Command * create_unary_command(void)=0;
	virtual Parent_Command * create_parent_command(void)=0;
    private:
        //Expr_Command_Factory (const Expr_Command_Factory &);
        //const Expr_Command_Factory & operator = (const Expr_Command_Factory &);

};
#endif
