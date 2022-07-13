#include "Num_Command.h"

/*
Num_Command::Num_Command(void)
{}

*/
Num_Command::Num_Command(Stack <int> & s_, int num)
:s_(s_), num_(num) 

{}


int Num_Command::execute(void){
	this->s_.push (this->num_); 
	//s_.push(this->num_);
}
