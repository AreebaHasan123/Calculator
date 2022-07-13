template <typename T>
inline
size_t Stack <T>::size (void) const
{
	return topelem;	
}

template <typename T>
inline
T Stack <T>::top (void) const
{
    if (is_empty()){
        throw empty_exception();
    }
    else{
        //return size()-1;
	return arr.get(topelem-1);
	//std::cout<<"HELOO"<<std::endl;	
}

}

template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
	if(topelem==0){
        	return true;
    }
    	else{
        	return false;
    }
}
