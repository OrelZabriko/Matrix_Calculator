#pragma once

//-----include section-----
#include "Constans.h"
#include "Matrix.h"

#include <iostream>
#include <vector>
#include <string>
#include <memory>


//-----class section-----
class Operations
{
public:
	//constructor
	Operations() = default;
	Operations(std::string name, const int countFunc = 1);
	//destructor
	//virtual function to make this polymorphism
	virtual ~Operations() = default;

	//functions
	const std::string getFunctionName() const;
	void setFuncName(std::string name);
	virtual const int getNumberOfMatrix() const = 0;
	virtual Matrix calcFunc(std::vector<Matrix> matrices) = 0;
	virtual void setCountFunc(const int countFunc);
	virtual int getCountFunc() const;

private:
	std::string funcName;
	int m_countFanc;
};