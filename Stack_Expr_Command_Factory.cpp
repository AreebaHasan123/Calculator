#include "Stack_Expr_Command_Factory.h"
#include "Expr_Command_Factory.h"
//initialize and deconstructor
//THIS IS CONCRETE FACTORY THAT RETURNS OUR PRODUCTS WHICH ARE OUR COMMANDS
Stack_Expr_Command_Factory::Stack_Expr_Command_Factory(Stack <int> & stack)
:stack_(stack)
{}
/*
Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory()
{
        //WHAT GOES IN HERE?
}
*/
Num_Command* Stack_Expr_Command_Factory::create_num_command(int num)
{
	return new Num_Command(this->stack_, num);
	//return new Num_Command(num);	

}

Add_Command* Stack_Expr_Command_Factory::create_add_command(void)
{
        return new Add_Command(this->stack_);
	//return new Add_Command();
}

Subtract_Command* Stack_Expr_Command_Factory::create_subtract_command(void)
{
       return new Subtract_Command(this->stack_);
	//return new Subtract_Command();
}

Multiply_Command* Stack_Expr_Command_Factory::create_multiply_command(void)
{
       //return new Multiply_Command();
	return new Multiply_Command(this->stack_);
 }

Divide_Command* Stack_Expr_Command_Factory::create_divide_command(void)
{
       //return new Divide_Command();
	return new Divide_Command(this->stack_);
 }
Modulus_Command* Stack_Expr_Command_Factory::create_modulus_command(void)
{
       //return new Divide_Command();
       return new Modulus_Command(this->stack_);
     }
Unary_Command* Stack_Expr_Command_Factory::create_unary_command(void)
{
       //return new Divide_Command();
        return new Unary_Command(this->stack_);
}
Parent_Command * Stack_Expr_Command_Factory::create_parent_command(void)
{
	return new Parent_Command(this->stack_);
}
