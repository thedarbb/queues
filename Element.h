/*
 * Element.h
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
using namespace std;
class Element
{
private:
	std::string _name;

public:
	Element(std::string name);
	virtual ~Element();
    std::string getName();
	friend class Queue;
	Element* _next;
};

#endif /* ELEMENT_H_ */
