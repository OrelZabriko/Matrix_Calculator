#pragma once

//-----include section-----
#include <iostream>
#include <vector>
#include <string>


//-----class section-----
class Operations
{
public:
	//virtual function
	virtual ~Operations() = default;

	const std::string getFunctionName() const;
	void setFuncName(std::string name);
	void printFuncName() const;


private:
	std::string funcName;
};