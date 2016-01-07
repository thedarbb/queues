/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: thedarbb
 */
#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

string expression;
Stack* stack = new Stack();

void parse(){
	cout << "Enter a mathematical expression 'eg: (3+3)' :" << endl;
	cin >> expression;
	cout << "\n";

	for (int i = 0; i < expression.size();  i++) {
		Element* data = new Element(expression);
		if((expression[i] == '(' || expression[i] == '[') && (expression[i] == ')' || expression[i] == ']' )){
		stack->push(data);
		}
	}
}

void stackFunc(){
	Element* i = stack->pop();
	cout << i->getName() << endl;
	i = stack->pop();
}

int main() {

	parse();
	stackFunc();

}
