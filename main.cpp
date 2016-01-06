/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */
#include <iostream>

#include "Stack.h"
using namespace std;
int main()
{
	Element* jules = new Element("Jules");
	Element* susan = new Element("Susan");
	Element* ray = new Element("Ray");
	Element* mike = new Element("Mike");
	Stack* stack = new Stack();
	stack->push(mike);
	stack->push(jules);
	stack->push(susan);
	stack->push(ray);


	Element* i = stack->pop();
	while(i != NULL)
	{
		cout << i -> getName() << endl;
		i = stack->pop();
	}


}
