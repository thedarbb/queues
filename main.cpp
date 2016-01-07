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
	Element* d = new Element("D");
	Element* c = new Element("C");
	Element* b = new Element("B");
	Element* a = new Element("A");
	Element* f = new Element("F");
	Element* e = new Element("E");
	Stack* stack = new Stack();

	stack->push(a);
	stack->push(d);
	stack->push(f);
	stack->push(b);
	stack->push(c);
	stack->push(e);


	Element* i = stack->pop();
	while(i != NULL)
	{
		cout << i -> getName() << endl;
		i = stack->pop();
	}


}
