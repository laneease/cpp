// Fig. 17.10: stack.h
// Template Stack class definition derived from class List.
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "list.h"   // Lits class definition

template< class STACKTYPE >
class Stack : private List< STACKTYPE > {

public:
    // push calls List function insertAtFront
    void push(const STACKTYPE &data)
    {
        insertAtFront(data);
    } // end function push

    // pop calls List function removeFromFront
    bool pop(STACKTYPE &data)
    {
        return removeFromFront(data);
    } // end function pop

    // isStackEmpty calls List function isEmpty
    bool isStackEmpty() const
    {
        return isEmpty();
    } // end function isStackEmpty

    // printStack calls List function print
    void printStack() const
    {
        print();
    } // end function print

}; // end class Stack


#endif // STACK_H_INCLUDED
