// Fig. 17.12: stackcomposition.h
// Template Stack class definitionwith composed List object.
#ifndef STACKCOMPOSITION
#define STACKCOMPOSITION

#include "list.h" // List class definition

template< class STACKTYPE >
class Stack {

public:
	// no constructor; List constructor does initialization
	
	// push calls stackList object's insertAtFront function
	void push(const STACKTYPE &data)
	{
		stackList.insertAtFront(data);
	} // end function push 
	
	// pop calls stackList object's removeFromFront function
	bool pop(STACKTYPE &data)
	{
		return stackList.removeFromFront(data);
	} // end function pop 
	
	// isStackEmpty calls stackList object's isEmpty function
	bool isStackEmpty() const
	{
		return stackList.isEmpty();
	} // end function isStackEmpty
	
	// printStack calls stackList object's print function
	void printStack() const
	{
		stackList.print();
	} // end function printStack
	
private:
	List< STACKTYPE > stackList;	// composed List object
	
}; // end class Stack

#endif