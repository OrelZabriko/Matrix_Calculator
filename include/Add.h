#pragma once

//-----include section-----
#include "Operations.h"

#include <memory>


//-----class section-----
class Add : public Operations
{
public:
	//constructor
	using Operations::Operations;
	Add(std::string funcName,
		std::shared_ptr<Operations> function1,
		std::shared_ptr<Operations> function2);
	
	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const override;

private:
	std::shared_ptr<Operations> m_func1;
	std::shared_ptr<Operations> m_func2;
};