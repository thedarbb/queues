/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: thedarbb
 */
#include "Parser.h"
#include <iostream>
#include <string>
using namespace std;

string expression;
//Stack* stack = new Stack();

int main(){
	Parser *parser = new Parser();
	string expression;
	cout << "Please enter the expression you would like to parse: " << endl;
	cin >> expression;
	if(parser ->parse(expression) == true)
	{
		cout << expression << " is a valid expression" << endl;
	}else
	{
		cout << expression << " is NOT a valid expression" << endl;
	}
	return 0;
}

//void parse(){
//	cout << "Enter a mathematical expression 'eg: (3+3)' :" << endl;
//	cin >> expression;
//	cout << "\n";
//	char lst = *expression.rbegin();
//	for (int i = 0; i < expression.size();  i++) {
//		Element* data = new Element(expression);
//		if((expression[i] == '(') && (lst == ')')){
//			stack->push(data);
//		} else if ((expression[i] == '[') && (lst == ']')){
//			stack->push(data);
//		}
//	}
//}
//
//void stackFunc(){
//	Element* i = stack->pop();
//	cout << i->getName() << endl;
//	i = stack->pop();
//}
//
//int main() {
//
//	parse();
//	stackFunc();
//
//}
