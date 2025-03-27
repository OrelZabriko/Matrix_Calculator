#pragma once

//-----include section-----
#include "Constans.h"
#include "Matrix.h"

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
	virtual const int getNumberOfMatrix() const = 0;
	virtual void calcFunc(std::vector<Matrix> matrices) = 0;

private:
	std::string funcName;
};