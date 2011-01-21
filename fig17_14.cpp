/* Fig. 17.14:
 * fig17_14.cpp
 * Template Queue class test program.
 *  Created on: 2010-12-22
 *      Author: Administrator
 */
#include <iostream>

using std::endl;

#include "queue.h"	// Queue class definition

int main()
{
	Queue< int > intQueue;	// create Queue of ints

	cout << "processing an integer Queue" << endl;

	// enqueue integers onto intQueue
	for (int i = 0; i < 4; i++) {
		intQueue.enqueue(i);
		intQueue.printQueue();
	} // end for

	// dequeue integers from intQueue
	int dequeueInteger;

	while (!intQueue.isQueueEmpty()) {
		intQueue.dequeue(dequeueInteger);
		cout << dequeueInteger << " dequeued" << endl;
		intQueue.printQueue();
	} // end while

	Queue< double > doubleQueue;	// create Queue of doubles
	double value = 1.1;

	cout << "processing a double Queue" << endl;

	// enqueue floating-point values onto doubleQueue
	for (int j = 0; j < 4; j++) {
		doubleQueue.enqueue(value);
		doubleQueue.printQueue();
		value += 1.1;
	} // end for

	// dequeue floating-point values from doubleQueue
	double dequeueDouble;

	while (!doubleQueue.isQueueEmpty()) {
		doubleQueue.dequeue(dequeueDouble);
		cout << dequeueDouble << " dequeued" << endl;
		doubleQueue.printQueue();
	} // end while

	return 0;

} // end main
