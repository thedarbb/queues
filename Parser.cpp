/*
 * Parser.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: thedarbb
 */

#include "Parser.h"

Parser::Parser() {
	// TODO Auto-generated constructor stub
	_stack = new Stack();
}

Parser::~Parser() {
	// TODO Auto-generated destructor stub
}

bool Parser::parse(std::string expression) {
	for (int i = 0; i < expression.size(); i++) {
		if (expression[i] == '(' || expression[i] == '[') {
			_stack->push(new Element(expression[i] + ""));
		} else if (expression[i] == ')' || expression[i] == ']') {
			Element* element = _stack->pop();
			if (element == NULL) {
				return false;
			}
			char symbol = element->getName()[0];
			if (symbol == '(' && expression[i] != ')') {
				return false;
			} else if (symbol == '[' && expression[i] != ']') {
				return false;
			}
		}
	}
	if (_stack->pop() != NULL) //Checking if the stack is NOT empty
	{
		return false;
	}
	return true;
}
