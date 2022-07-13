#ifndef _CS507_STACK_H_
#define _CS507_STACK_H_

#include "Array.h"
#include <exception>
template <typename T>
class Stack
{
public:
	typedef T type;
	class empty_exception : public std::runtime_error{
	public:
		empty_exception (void)
    		: std::runtime_error ("EmptyException") { }
		empty_exception (const char * msg)
     		: std::runtime_error (msg) { }
 		 };
	Stack (void);
	Stack (const Stack & s);
	~Stack (void);
	const Stack & operator = (const Stack & rhs);
	void push(T element);
	T pop(void);
	T top(void) const;
	bool is_empty (void) const;
	size_t size (void) const;
	void clear (void);
private:
	size_t topelem;
	size_t cursize;
	Array<T> arr;
	
};
#include "Stack.inl"
#include "Stack.cpp"
#endif 
