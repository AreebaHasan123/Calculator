#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_

#include <cstring>
#include "Array.h"
#include <stdexcept>
template <typename T>
class Array_Iterator {
public:	
	typedef T type;
	Array_Iterator(void);
	Array_Iterator(Array<T> & a);
	~Array_Iterator(void);
	bool is_done(void);
	void advance(void);
	T & operator * (void);
	T * operator ->(void);
protected:
	Array<T> & a_;
	size_t curr_;



};
#include "Array_Iterator.cpp"
#endif
