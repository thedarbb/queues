/*
 * Queue.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#include "Stack.h"

Stack::Stack() : _last(NULL)
{


}

void Stack::push(Element *element)
{
	if(_last == NULL) // the queue is empty
	{
		_last = element;

	}else //if the queue is not empty
	{
		element -> _next = _last;
		_last = element;
	}
}

Element *Stack::pop()
{
	if(_last == NULL)
	{
		return NULL;
	}
	Element* temp = _last;
	_last = _last -> _next;
	return temp;

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}
