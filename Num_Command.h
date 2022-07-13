#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

#include "Stack.h"
#include "Expr_Command.h"

class Num_Command:public Expr_Command{
    public:
        Num_Command(void); 
	Num_Command(Stack<int> & s, int num);
	//virtual int execute(Stack <int> & s_);
    	virtual int execute(void);
   
    private:
        Stack<int> & s_;
        int num_;
};
#endif

