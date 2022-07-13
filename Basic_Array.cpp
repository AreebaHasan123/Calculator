//#include "Basic_Array.h"
#include <iostream>
#include <stdexcept>

template <typename T>
Basic_Array <T>::Basic_Array (void)
:data_(new T[0]), 
cur_size_(0), 
max_size_(0)
{}


template <typename T>
Basic_Array <T>:: Basic_Array (size_t length)
:cur_size_(length),
max_size_(length),
data_(new T [length])
{}

template <typename T>
Basic_Array <T>::Basic_Array (size_t length, T fill)
:cur_size_(length),
max_size_(length),
data_(new T[length])
{
	for (int i=0; i<length; i++){
        	data_[i]=fill;
    }
}

template <typename T>
Basic_Array <T>::Basic_Array (const Basic_Array & array)
:data_ (new T[array.max_size()]),
  cur_size_ (array.size()),
  max_size_ (array.max_size())
{
	for (int i=0;  i<cur_size_;i++){
        	data_[i]=array[i];
  } 
}
template <typename T>
Basic_Array <T>::~Basic_Array (void)
{
	delete[] this->data_;
}

template <typename T>
const Basic_Array <T> & Basic_Array <T>::operator = (const Basic_Array & rhs)
{
    {	
	if (this==&rhs){
        	return *this;
    	}else{
        	
		if (cur_size_>rhs.cur_size_){
			cur_size_=rhs.cur_size_;
}
		else{			
			for(int i=0; i<cur_size_;i++){
				data_[i]=rhs.data_[i];
}
			cur_size_=rhs.cur_size_;			
			return *this;	
}
     		
}
   
}
}
template <typename T>
T & Basic_Array <T>::operator [] (size_t index)
{
	if (index > cur_size_){
		throw std::out_of_range("Error1");
    }
	else{
        
		return data_[index];    

}
}

template <typename T>
const T & Basic_Array <T>::operator [] (size_t index) const
{
	if (index > cur_size_){
		throw std::out_of_range("Error2");
    }
    	else{	 
        	return data_[index];
    }

}

template <typename T>
T Basic_Array <T>::get (size_t index) const
{
	if (index > cur_size_){
		throw std::out_of_range("Error3");
    }
	else{
		return data_[index];
        
    }	
}

template <typename T>
void Basic_Array <T>::set (size_t index, T value)
{
	if (index > cur_size_){
        	throw std::out_of_range("Error4");
    }
	else{ 
 	       	data_[index]=value;
		}
}
template  <typename T>
int Basic_Array <T>::find (T value) const
{
	for(int i=0; i<=cur_size_; i++){
		if (value==data_[i]){
			return i;			
}
}
	return -1;
}
template <typename T>
int Basic_Array <T>::find (T val, size_t start) const
{
	if (start<0 || start>cur_size_){
        	throw std::out_of_range("Error5");
		std::cout<<"NO"<<std::endl;
    	
	} else  {

		for(int i=start; i<=cur_size_; i++){
			if (val==data_[i]){
				std::cout<<i<<"Yay"<<std::endl;
				return i;
		}else{
			std::cout<<"NOPE!"<<std::endl;
			return -1;}

}
    	
   	 
   
}

}
template <typename T>
bool Basic_Array <T>::operator == (const Basic_Array & rhs) const
{
	if (this==&rhs){
		return true;
}
	if(cur_size_ !=rhs.cur_size_){
		return false;
}
	for (int i=0; i<cur_size_; i++){
		if (data_[i]==rhs.data_[i]){
			return true;
		}else{
			return false;
}	
}	
}
template <typename T>
bool Basic_Array <T>::operator != (const Basic_Array & rhs) const
{
	return !(*this == rhs);

}

template <typename T>
void Basic_Array <T>::fill (T value)
{
	     
	for(size_t i=0; i<cur_size_; i++){
		data_[i]= value;
		
		std::cout<<data_[i]<<i<<value<<std::endl;
	
	}
	

}
