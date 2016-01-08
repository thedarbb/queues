/*
 * Parser.h
 *
 *  Created on: Jan 8, 2016
 *      Author: thedarbb
 */

#ifndef PARSER_H_
#define PARSER_H_
#include "Stack.h"
#include <string>

class Parser {
public:
	Parser();
	virtual ~Parser();
	bool parse(std::string expression);
private:
	Stack* _stack;
};

#endif /* PARSER_H_ */
