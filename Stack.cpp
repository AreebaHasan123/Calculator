
//#include "Stack.h"
#include <stdexcept>
#include <cstdlib>
#include <iostream>
template <typename T>
Stack <T>::Stack (void)
{
	topelem=0;
	arr=Array<T>();
	cursize=0;	
}
template <typename T>
Stack <T>::Stack (const Stack & stack)
:topelem(stack.topelem),
cursize(stack.cursize),
arr(Array<T>(stack.arr))
{
	for (int i=0; i<size(); i++){
        	arr[i]=stack.arr[i];
    }
}
template <typename T>
Stack <T>::~Stack (void)
{
   
}

template <typename T>
void Stack <T>::push (T element)
{
	if(arr.size()>(topelem)){ 
		std::cout<<"The stack is full"<<std::endl;
		arr.resize(arr.size()+1);
    }
	else{
 		//std::cout<<"TOP ELEM"<<topelem<<std::endl; 
        	arr.resize(arr.size()+1);
        	arr.set(topelem,element);
		//cursize++;
		topelem++;
		std::cout<<"Inserted element: "<<element<<std::endl;
		//std::cout<<"Top Ptr: "<<topelem<<std::endl;    
		//std::cout<<"What the inline top method returns: "<<top()<<std::endl;

}


}
template <typename T>
T Stack <T>::pop (void)
{
	if(is_empty()==true){
        	throw empty_exception(); 
        	std::cout<<"This stack is empty"<<std::endl;
    }
    	else{
       
		//topelem--;
        	arr.resize(size()-1);
		topelem--;
		return arr[topelem];
		std::cout<<"Element popped: "<<arr[topelem]<<std::endl;
}
}
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	std::cout << "assignment operator called" << std::endl;
	arr=rhs.arr;    
	topelem=rhs.topelem;
	cursize=rhs.cursize;
	return *this;
        


   

}
template <typename T>
void Stack <T>::clear (void)
{
	arr.resize(0);	
}

