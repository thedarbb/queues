/*
 * Queue.h
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "Element.h"
class Queue
{
private:
	Element* _first;
	Element* _last;

public:
	void enqueue(Element* element);
	Element* dequeue();
	Queue();
	virtual ~Queue();
};

#endif /* QUEUE_H_ */
