/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */
#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
	Element* jules = new Element("Jules");
	Element* susan = new Element("Susan");
	Element* ray = new Element("Ray");
	Element* mike = new Element("Mike");
	Queue* queue = new Queue();
	queue->enqueue(mike);
	queue->enqueue(jules);
	queue->enqueue(susan);
	queue->enqueue(ray);


	Element* i = queue->dequeue();
	while(i != NULL)
	{
		cout << i -> getName() << endl;
		i = queue->dequeue();
	}


}
