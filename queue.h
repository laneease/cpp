// Fig. 17.13: queue.h
// Template Queue class definition derived from class List.
#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"	// List class definition

template< class QUEUETYPE >
class Queue : private List< QUEUETYPE > {

public:
	// enqueue calls List function insertAtBack
	void enqueue(const QUEUETYPE &data)
	{
		insertAtBack(data);
	} // end function enqueue

	// dequeue calls List function removeFromFront
	bool dequeue(QUEUETYPE &data)
	{
		return removeFromFront(data);
	} // end function dequeue

	// isQueueEmpty calls List function isEmpty
	bool isQueueEmpty() const
	{
		return isEmpty();
	} // end function isQueueEmpty

	// printQueue calls List function print
	void printQueue() const
	{
		print();
	} // end function printQueue

}; // end class Queue

#endif
