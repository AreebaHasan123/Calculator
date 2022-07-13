//#include "Array.h"
#include <stdexcept>
#include <cstdlib>
#include <iostream>

template <typename T>
Array <T>::Array (void)
{
	this->data_=new T[0];
	this->cur_size_=0;
	this->max_size_=0;
}
template <typename T>
Array <T>::Array (size_t length)
{
	this->cur_size_=length;
	this->max_size_=length;
	this->data_=new T [length];

}
template <typename T>
Array <T>::Array (size_t length, T fill)
{
	this->cur_size_=length;
	this->max_size_=length;
	this->data_=new T[length];

	for (int i=0; i<length; i++){
        	this->data_[i]=fill;
    }
}
template <typename T>
Array <T>::Array (const Array & array)

{
	this->cur_size_=array.cur_size_;
	this->max_size_=array.max_size_;
	this->data_=new T[array.cur_size_];

	for (int i=0;  i<this->cur_size_;i++){
        	this->data_[i]=array[i];
  } 

}

template <typename T>
Array <T>::~Array (void)
{
	//taken care of through basic array
}

template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)

{
        if (this==&rhs){
                return *this;
}	else{
        	if(this->cur_size_ > rhs.cur_size_){
                	this->cur_size_=rhs.cur_size_;
		}else{
        		for (int i=0; i<this->cur_size_; i++){
                		 this->data_[i]==rhs.data_[i];
                        }
                	this->cur_size_=rhs.cur_size_;
			return *this;
}
}
}
template <typename T>
void Array <T>::resize (size_t new_size)

{
   
	if (new_size<this->max_size_){
 	       	this->cur_size_=new_size;
		std::cout<<this->cur_size_<<std::endl;
		std::cout<<new_size<<std::endl;
		std::cout<<this->max_size_<<std::endl;
	}else{               
		T *arr=new T[new_size];
		for(size_t i = 0 ; i < this->cur_size_ ; i++)
		{
			arr[i]= this->data_[i];
		}
		delete [] this->data_;
		this->cur_size_=new_size;
		this->max_size_=new_size;
				
		this->data_=arr;
		std::cout<<"Resize cur_size"<<this->cur_size_<<std::endl;
		std::cout<<"Resize new size"<<new_size<<std::endl;
}
}


