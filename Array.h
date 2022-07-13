#ifndef _ARRAY_H_
#define _ARRAY_H_
#include "Basic_Array.h"
#include <cstring>   

template <typename T>
class Array: public Basic_Array<T>
{
	public:
		typedef T type;
		Array (void);
		size_t size (void) const;
        	size_t max_size (void) const;

		Array (size_t length);	
		Array (size_t length, T fill);

		Array (const Array<T> & arr);
	
		~Array (void);
	
		const Array<T>& operator = (const Array<T> & rhs);
		void resize(size_t new_size);
		void fill (T element);
		void shrink(void);
};
#include "Array.inl"
#include "Array.cpp"
#endif
	
