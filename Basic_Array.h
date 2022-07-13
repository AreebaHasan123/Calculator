#ifndef _BASIC_ARRAY_H_
#define _BASIC_ARRAY_H_
#include <cstring>
#include <stdexcept>
template <typename T>
class Basic_Array
{
public:
	typedef T type;
	Basic_Array (void);
	Basic_Array (size_t length);	
	Basic_Array (size_t length, T fill);

	Basic_Array (const Basic_Array<T> & arr);
	
	~Basic_Array (void);
	
	const Basic_Array<T>& operator = (const Basic_Array<T> & rhs);
	
	T& operator [] (size_t index);
	const T& operator [] (size_t index) const;
	T get (size_t index) const;
	void set (size_t index, T value);
	int find (T element) const;
	int find (T element, size_t start) const;
	bool operator == (const Basic_Array & rhs) const;
	bool operator != (const Basic_Array & rhs) const;
	void fill (T element);
	size_t size(void) const;
	size_t max_size(void) const;

	T* data_;
	size_t cur_size_;
	size_t max_size_;

};

#include "Basic_Array.inl"
#include "Basic_Array.cpp"
#endif
