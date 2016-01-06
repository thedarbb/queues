/*
 * Queue.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#include "Queue.h"

Queue::Queue() : _first(NULL),_last(NULL)
{


}

void Queue::enqueue(Element *element)
{
	if(_first == NULL) // the queue is empty
	{
		_first = element;
		_last = element;
	}else //if the queue is not empty
	{
		_last -> _next = element;
		_last = element;
	}
}

Element *Queue::dequeue()
{
	if(_first == NULL)
	{
		return NULL;
	}
	Element* temp = _first;
	_first = _first -> _next;
	return temp;

}

Queue::~Queue() {
	// TODO Auto-generated destructor stub
}
