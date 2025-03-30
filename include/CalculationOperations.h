#pragma once

//-----include section-----
#include "Operations.h"

#include <memory>
#include <vector>
#include <string>


//-----class section-----
class CalculationOperations : public Operations
{
public:
	//constructor
	using Operations::Operations;
	CalculationOperations(std::string nameFunc1, std::string nameFunc2,
						  std::shared_ptr<Operations> function1,
						  std::shared_ptr<Operations> function2,
						  std::string sign);
	//destructor
	virtual ~CalculationOperations() = default;

protected:
	std::shared_ptr<Operations> m_func1;
	std::shared_ptr<Operations> m_func2;
	std::string m_sign;
};