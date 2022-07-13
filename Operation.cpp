#include "Operation.h"
#include "Array_Iterator.h"

Operation::Operation(void)
{

}
int Operation::evaluate_postfix (Array_Iterator<Expr_Command *> & iter) {
	for (; !iter.is_done(); iter.advance()){
                (*iter)->execute();
		//delete * iter;	
}	

}



bool Operation::infix_to_postfix(const std::string & infix, Expr_Command_Factory & factory, Array <Expr_Command *> & postfix){
	std::istringstream input(infix);
        std::string token;
	Expr_Command * cmd = 0;
        Stack <Expr_Command *> temp;
        Stack<int> result;
	while(!input.eof()){
		input>>token;	
		if (token=="+" || token=="-" || token=="*" || token=="/" || token=="%" ||token=="(" || token==")"){
			if(token=="+"){
                        	cmd=factory.create_add_command();}
			if(token=="-"){
                                cmd=factory.create_subtract_command();}
			if(token=="*"){
                                cmd=factory.create_multiply_command();}
			if(token=="/"){
                                cmd=factory.create_divide_command();}
			 if(token=="%"){
                                cmd=factory.create_modulus_command();}
			if(token=="("){
				cmd=factory.create_parent_command();}
			 
						
        		while(!temp.is_empty()&& temp.top()->precedence() >= cmd->precedence()){
				postfix.resize(postfix.cur_size_+1);
				postfix[postfix.cur_size_-1]=temp.top();
				temp.pop();
					}
			temp.push(cmd); }
		

		if(token==")"){
			cmd=factory.create_parent_command();
			temp.pop();
		}				
		if(token!="+" && token!="-" && token!="*" && token!="/" && token!="%" && token !="(" && token !=")"){
			int amount;
			std::stringstream ss(token);
			ss>>amount;
			cmd=factory.create_num_command(amount);
			postfix.resize(postfix.cur_size_+1);
			postfix.set(postfix.cur_size_-1, cmd);
								

		while (!temp.is_empty()) {
			postfix.resize(postfix.size()+1);
    			postfix[postfix.size() - 1] = temp.top();	
			temp.pop();
		}
		}
	}
	Array_Iterator<Expr_Command*> iterator = Array_Iterator<Expr_Command*> (postfix);
	evaluate_postfix(iterator);
	return true;
	 
}

int Operation::calculate(){
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

}        

			
		

