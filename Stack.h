   // -*- C++ -*-
// $Id: Stack.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS507_STACK_H_
#define _CS507_STACK_H_

#include "Array.h"
#include <exception>

/**
 * @class Stack
 *
 * Basic stack for abitrary elements.
 */
template <typename T>
class Stack
{
public:
  /// Type definition of the type.
  typedef T type;

  /**
   * @class empty_exception
   *
   * Exception thrown to indicate the stack is empty.
   */
  class empty_exception : public std::logic_error
  {
  public:
    /// Default constructor.
    empty_exception (void)
      : std::logic_error () 
	  {
		//Constructor doesn't explicitly do anything
		//Because this is a logic_error, it inherits what()
		//Allowing the exception message to be specified
		//at the place the exception occurs/is thrown
	  }

    /**
     * Initializing constructor.
     *
     * @param[in]      msg         Error message.
     */
    empty_exception (const char * msg)
      : std::logic_error (msg) 
	  {
		//Constructor doesn't explicitly do anything
		//Because this is a logic_error, it inherits what()
		//Allowing the exception message to be specified
		//at the place the exception occurs/is thrown
	  }
  };

  /// Default constructor.
  Stack (void);

  /// Copy constructor.
  Stack (const Stack & s);

  /// Destructor.
  ~Stack (void);

  /**
   * Assignment operator
   *
   * @param[in]      rhs           Right-hand side of operator
   * @return         Reference to self
   */
  const Stack & operator = (const Stack & rhs);

  /**
   * Push a new \a element onto the stack. The element is inserted
   * before all the other elements in the list.
   *
   * @param[in]      element       Element to add to the list
   */
  void push (T element);

  /**
   * Remove the top-most element from the stack.
   *
   * @exception      empty_exception    The stack is empty.
   */
  void pop (void);

  /**
   * Get the top-most element on the stack. If there are no element 
   * on the stack, then the stack_is_empty exception is thrown.
   *
   * @return         Element on top of the stack.
   * @exception      empty_exception    The stack is empty
   */
  T top (void) const;

  /**
   * Test if the stack is empty
   *
   * @retval         true          The stack is empty
   * @retval         false         The stack is not empty
   */
  bool is_empty (void) const;

  /**
   * Number of element on the stack.
   *
   * @return         Size of the stack.
   */
  size_t size (void) const;

  /// Remove all elements from the stack.
  void clear (void);
  
  // Return element of the stack (for testing)
  T get (size_t index) const;

private:
  // COMMENT There is no need to allocate the array on the heap. Always try to
  // allocate on the stack to reduce the complexity of your code.
  // RESPONSE The array is now allocated on the stack instead of the heap
	Array<T> stackArray_;
};

// include the inline files
#include "Stack.inl"

// include the source file since template class
#include "Stack.cpp"

#endif  // !defined _CS507_STACK_H_
