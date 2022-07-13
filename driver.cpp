//Had to start my project over. Was getting this weird error that even after several days I couldn't figure out what was wrong.
//So instead of wasting time and going in circles, I started over

#include "Array.h"
#include "Basic_Array.h"
#include "Stack.h"
#include "Array_Iterator.h"
#include "Expr_Command.h"
#include "Stack_Expr_Command_Factory.h"
#include "Expr_Command_Factory.h"
#include "Operation.h"
#include <stdexcept>
#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;
// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.

//ADDRESS: I took all the C functions and put them in my 
//Operations file in a class called Calculate. All this driver function does is instantiate the
//Operations class and run the Calculate method.
int main (int argc, char * argv []){

/*
	bool keepGoing=true;
        std::string infix;
	Stack<int> result;
       	Stack_Expr_Command_Factory factory (result); 
        Array<Expr_Command *> postfix;
	Operation o=Operation();
	while(keepGoing){
                std::cout<<"Insert statement or QUIT: "<<std::endl;
                std::getline(std::cin, infix);
                if(infix=="QUIT"){
                        keepGoing=false;
}
                else{
               
  			
  			
			o.infix_to_postfix(infix, factory, postfix);	
			int res=result.top();
			std::cout<<res<<std::endl;		
			
}
}
*/
		Operation o=Operation();
		o.calculate();
}			




