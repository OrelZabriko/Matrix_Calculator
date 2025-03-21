#pragma once

//-----include section-----
#include "Constans.h"

#include <iostream>
#include <vector>
#include <string>


//-----class section-----
class Operations
{
public:
	//constructor
	Operations() = default;
	Operations(std::string name);
	//destructor
	//virtual function to make this polymorphism
	virtual ~Operations() = default;

	//functions
	const std::string getFunctionName() const;
	void setFuncName(std::string name);
	void printFuncName() const;

private:
	std::string funcName;
};