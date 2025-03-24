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
	//virtual void execute(std::vector<std::vector<int>>& matrices) = 0; //need to make this function in the cpp file of the functions

private:
	std::string funcName;
};